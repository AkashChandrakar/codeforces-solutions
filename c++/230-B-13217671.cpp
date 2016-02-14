#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const int sz = 1000010;
bool sieve[sz];
set<ll> tprimes;
void genrate() {
    fill(sieve, sieve + sz, true);
    for (int i = 2; i * i < sz; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j < sz; j += i) {
                sieve[j] = false;
            }
        }
    }
    for (int i = 2; i < sz; ++i) {
        if (sieve[i]) {
            ll p = i;
            tprimes.insert(p * p);
        }
    }
}
int main() {
    int n;
    ll x;
    genrate();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (tprimes.find(x) != tprimes.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}