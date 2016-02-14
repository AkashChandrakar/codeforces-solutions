#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const int sz = 100010;
int ans[sz];
struct compare {
    bool operator()(const int &lhs, const int &rhs) const {
        return ((lhs % 10) > (rhs % 10));
    }
};
multiset<int, compare> S;
multiset<int, compare>::iterator it;
int main() {
    int n, k, elm;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        S.insert(elm);
    }
    int res = 0;
    while (k && !S.empty()) {
        it = S.begin();
        elm = *it;
        S.erase(S.find(elm));
        if (elm == 100) {
            res += 10;
            continue;
        }
        int rem = elm % 10;
        if (k <= (10 - rem)) {
            elm += k;
            k = 0;
        } else {
            int toadd = 10 - rem;
            k -= toadd;
            elm += toadd;
        }
        if (elm == 100) {
            res += 10;
        } else {
            S.insert(elm);
        }
    }
    for (it = S.begin(); it != S.end(); ++it) {
        elm = *it;
        //cout << elm << endl;
        res += (elm / 10);
    }
    cout << res;
    return 0;
}