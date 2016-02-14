#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
ll a[sz];
ll inc[sz], exc[sz];
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        a[elm]++;
    }
    inc[1] = a[1];
    exc[1] = 0;
    inc[2] = 2 * a[2];
    exc[2] = inc[1];
    ll mx = max(inc[2], exc[2]);
    for (int i = 3; i <= sz; ++i) {
        inc[i] = i * a[i] + max(inc[i - 2], exc[i - 2]);
        exc[i] = max(inc[i - 1], exc[i - 1]);
        ll tmp = max(inc[i], exc[i]);
        mx = max(mx, tmp);
    }
    cout << mx << endl;
    return 0;
}