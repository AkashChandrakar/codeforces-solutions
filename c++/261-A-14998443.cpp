#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, discount;

int main() {
    int n, m, i, elm, mn;
    cin >> m;
    mn = INT_MAX;
    for (i = 0; i < m; ++i) {
        cin >> elm;
        mn = min(mn, elm);
    }
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.rbegin(), v.rend());
    int res = 0;
    i = 0;
    int cnt;
    while (i < n) {
        cnt = mn;
        while (i < n && cnt) {
            res += v[i];
            ++i;
            --cnt;
        }
        /*if (i + 1 < n)
            ++i;*/
        if (i + 1 < n)
            ++i;
        ++i;
    }
    cout << res;
    return 0;
}