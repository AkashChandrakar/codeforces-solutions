#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
const int sz = 1000010;
vector<ll> v;
ll s;
ll cnt[sz];
int main() {
    int n;
    ll elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    s = accumulate(v.begin(), v.end(), 0ll);
    if (s % 3) {
        cout << 0;
        return 0;
    }
    s /= 3;
    ll runsum = 0;
    for (int i = n - 1; i >= 0; --i) {
        runsum += v[i];
        if (runsum == s)
            cnt[i] = 1;
    }
    for (int i = n - 2; i >= 0; --i) {
        cnt[i] += cnt[i + 1];
    }
    runsum = 0;
    ll res = 0;
    for (int i = 0; i + 2 < n; ++i) {
        runsum += v[i];
        if (runsum == s)
            res += cnt[i + 2];
    }
    cout << res;
    return 0;
}