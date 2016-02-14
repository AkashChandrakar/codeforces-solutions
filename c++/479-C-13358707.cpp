#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<ll, ll> ii;
vector<ii> p;

int main() {
    int n;
    ll a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        p.push_back(ii(a, b));
    }
    sort(p.begin(), p.end());
    ll ans = p[0].second;
    ll prevday = ans;
    for (int i = 1; i < n; ++i) {
        if (p[i].second >= prevday) {
            prevday = p[i].second;
        } else {
            prevday = p[i].first;
        }
        ans = prevday;
    }
    cout << ans;
    return 0;
}