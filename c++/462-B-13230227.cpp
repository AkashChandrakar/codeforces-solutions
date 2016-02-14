#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
ll hsh[27];
int main() {
    string s;
    int n;
    int c;
    ll k;
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        c = s[i] - 'A';
        hsh[c]++;
    }
    sort(hsh, hsh + 27, greater<int>());
    ll ans = 0L;
    for (int i = 0; i < 26 && k > 0; ++i) {
        ll cnt = hsh[i];
        if (k >= cnt) {
            ans = ans + (cnt * cnt);
            k -= cnt;
        } else {
            ans = ans + (1ll * k * k);
            break;
        }
    }
    cout << ans;
    return 0;
}