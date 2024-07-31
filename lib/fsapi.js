/**
 * Bunch of filesystem plus shell utilities
 */

var _ = require('lodash'),
    async = require('async'),

    fs = require('fs'),
    path = require('path');

module.exports = {
    readJSONFile: function(fileName, cb) {
        fs.readFile(fileName, 'utf8', function(err, data) {
            if (err) { return cb({}); }

            var jsonData;

            try {
                jsonData = JSON.parse(data);
            }
            catch (e) {
                jsonData = {};
            }

            return cb(null, jsonData);
        });
    },

    createFileWithHeader: function(fileHeaderPath = '../template.cpp', filePath, cb) {
        async.waterfall([
            // 1. Try to read file header
            function(cb) {
                fs.readFile(fileHeaderPath, 'utf8', function(err, data) {
                    err && (data = `// Time:  ${new Date()}
// Author: Monu Carpenter

#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}`);

                    return cb(null, data);
                });
            },

            // 2. Create the File
            function(data, cb) {
                return fs.writeFile(filePath, data, cb);
            }
        ], function(err) {
            if (err) { return cb(err); }

            return cb();
        });
    },

    createIOFiles: function(dir, io, cb) {
        var self = this,
            files = self._parseIOFiles(io);

        async.map(files, function(file, cb) {
            return fs.writeFile(path.join(dir, file.name), file.data, cb);
        }, function(err) {
            if (err) { return cb(err); }

            return cb();
        });
    },

    _parseIOFiles: function(io) {
        return _.transform(io, function(result, vals, type) {
            for (var i = 0; i < vals.length; i++) {
                result.push({ name: type + i + '.txt', data: vals[i] });
            }
        }, []);
    },

    getLinesFromFile: function(fileName, cb) {
        fs.readFile(fileName, 'utf8', function(err, data) {
            if (err) { return cb(null, []); }

            return cb(null, _.compact(_.split(data, require('os').EOL)));
        });
    },

    /**
     * getFilesByRegex - Returns set of files grouped by capturing group of the regex
     *
     * @param  {string} dir   the dir name
     * @param  {Object} regex the regex object
     * @param  {Function} cb    The function that marks end of getFilesByRegex function
     * @return {*}
     */
    getFilesByRegex: function(dir, regex, cb) {
        fs.readdir(dir, function(err, files) {
            if (err) { return cb(err); }

            files.sort(); // unsorted may not work in windows

            return cb(null, _.transform(files, function(result, file) {
                var grp = _.get(regex.exec(file), '1');

                grp && (result[grp] || (result[grp] = []));
                grp && (result[grp].push(path.join(dir, file)));
            }, {}));
        });
    },

    copyFile: function(source, target, cb) {
        var cbCalled = false,
            rd = fs.createReadStream(source),
            wr = fs.createWriteStream(target),
            done = function(err) {
                if (!cbCalled) {
                    cb(err);
                    cbCalled = true;
                }
            };

        rd.on('error', function(err) {
            done(err);
        });

        wr.on('error', function(err) {
            done(err);
        });

        wr.on('close', function() {
            done();
        });

        rd.pipe(wr);
    }
};
