#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
vector<ll> v;
const int sz = 1000010;
ll a[sz];
int main() {
    ll n, elm, t;
    cin >> n >> t;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        a[i] = elm;
        v.push_back(elm);
    }
    partial_sum(v.begin(), v.end(), v.begin());
    ll tobesearched;
    int res = 0, tres;
    int idx;
    for (int i = 0; i < n; ++i) {
        tobesearched = v[i] - a[i] + t;
        idx = lower_bound(v.begin(), v.end(), tobesearched) - v.begin();
        if (idx == n)
            --idx;
        else if (tobesearched != v[idx])
            --idx;
        tres = idx - i + 1;
        res = max(tres, res);
    }
    cout << res;
    return 0;
}