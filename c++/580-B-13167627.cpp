#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
vector<ii> v;

int main() {
    int n, m;
    ll s, d, res, sum;
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> m >> s;
        v.push_back(ii(m, s));
    }
    sort(v.begin(), v.end());
    sum = res = v[0].second;
    int beg = 0;
    for (int i = 1; i < n; ++i) {
        while ((v[i].first - v[beg].first) >= d) {
            sum -= v[beg].second;
            ++beg;
        }
        sum += v[i].second;
        res = max(res, sum);
    }
    cout << res;
    return 0;
}