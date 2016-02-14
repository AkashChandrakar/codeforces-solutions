#include <bits/stdc++.h>
using namespace std;
const int sz = 2001;
typedef pair<int, int> ii;
vector<ii> v;
int res[sz];
int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.push_back(ii(a, i));
    }
    sort(v.begin(), v.end());
    int i, j, pj, val;
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n && v[i].first == v[j].first; ++j) {
            //
        }
        val = n - j + 1;
        --j;
        while (j != i) {
            res[v[j].second] = val;
            --j;
        }
        res[v[i].second] = val;
    }
    for (int i = 0; i < n; ++i) {
        cout << res[i] << " ";
    }
    return 0;
}