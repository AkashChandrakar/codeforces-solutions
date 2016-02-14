#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
vector<ll> v;
string s;
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    ll elm;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    ll hcf = gcd(v[0], v[1]);
    for (int i = 2; i < n; ++i) {
        hcf = gcd(hcf, v[i]);
    }
    for (int i = 0; i < n; ++i) {
        ll factors = v[i] / hcf;
        while (factors != 1) {
            if (factors % 2 != 0 && factors % 3 != 0) {
                cout << "NO\n";
                return 0;
            }
            if (factors % 2 == 0)
                factors /= 2;
            if (factors % 3 == 0)
                factors /= 3;
        }
    }
    cout << "YES\n";
    return 0;
}