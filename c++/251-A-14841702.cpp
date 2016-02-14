#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;

int main() {
    ll n, elm, d, res, rng;
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    res = 0;
    for (int i = 0; i + 2 < n; ++i) {
        rng = lower_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        if (v[i] + d != v[rng])
            --rng;
        rng -= i;
        if (rng >= 2) {
            res = res + (rng * (rng - 1) / 2);
        }
    }
    cout << res << endl;
    return 0;
}