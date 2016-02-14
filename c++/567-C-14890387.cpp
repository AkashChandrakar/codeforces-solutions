#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;
const int sz = 200010;
ll Left[sz], Right[sz];
map<ll, ll> S;
set<ll> start;
set<ll>::iterator it;
int main() {
    int n;
    ll elm, k, search;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
        if (elm % k == 0) {
            search = elm / k;
            if (S.find(search) != S.end())
                Left[i] = S[search];
        }
        if (S.find(elm) == S.end()) {
            S[elm] = 1LL;
        } else {
            ++S[elm];
        }
    }
    S.clear();
    for (int i = n - 1; i >= 0; --i) {
        elm = v[i];
        if (elm % k == 0) {
            search = elm * k;
            if (S.find(search) != S.end())
                Right[i] = S[search];
        }
        if (S.find(elm) == S.end()) {
            S[elm] = 1LL;
        } else {
            ++S[elm];
        }

    }
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        //cout << Left[i] << " " << Right[i] << endl;
        res += (Left[i] * Right[i]);
    }
    cout << res << endl;
    return 0;
}