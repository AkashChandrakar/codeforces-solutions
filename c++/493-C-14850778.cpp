#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v1, v2;

int main() {
    int n, m, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v1.push_back(elm);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> elm;
        v2.push_back(elm);

    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int res, team1, team2, t1, t2, diff, idx;
    team1 = team2 = res = INT_MIN;
    for (int i = 0; i < n; ++i) {
        t1 = 2 * i + 3 * (n - i);
        idx = lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
        if (idx > m && v2[idx] != v1[i])
            --idx;
        if (idx < 0)
            idx = 0;
        //cout << idx << endl;
        t2 = 2 * idx + 3 * (m - idx);
        //cout << t1 << " " << t2 << endl;
        diff = t1 - t2;
        if (diff >= res) {
            if (diff == res) {
                if (t1 > team1) {
                    team1 = t1;
                    team2 = t2;
                }
            } else {
                team1 = t1;
                team2 = t2;
            }
            res = diff;
        }
    }
    t1 = 2 * n;
    t2 = 2 * m;
    diff = t1 - t2;
    if (diff >= res) {
        if (diff == res) {
            if (t1 > team1) {
                team1 = t1;
                team2 = t2;
            }
        } else {
            team1 = t1;
            team2 = t2;
        }
        res = diff;
    }
    cout << team1 << ":" << team2;
    return 0;
}