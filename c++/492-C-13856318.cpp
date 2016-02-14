#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
vector<ii> v;
bool comp(ii a, ii b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
ll n, r, avg;
int main() {
    cin >> n >> r >> avg;
    ll a, b, sum;
    sum = 0;
    avg = avg * n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        sum += a;
        v.push_back(ii(a, b));
    }
    ll ans = 0;
    if (sum >= avg) {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; ++i) {
        ll diff = r - v[i].first;
        ll sumdiff = avg - sum;
        if (diff >= sumdiff) {
            ans += (sumdiff * v[i].second);
            break;
        } else {
            ans += (diff * v[i].second);
            sum += diff;
        }
    }
    cout << ans;
    return 0;
}