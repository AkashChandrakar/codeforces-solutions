#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
vector<int> ans;
multiset<int> S;
multiset<int>::reverse_iterator it;
int main() {
    int n, elm, k, t;
    cin >> n >> t >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    for (int i = 0; i < k; ++i) {
        S.insert(v[i]);
    }
    it = S.rbegin();
    ans.push_back(*it);
    for (int i = k; i < n; ++i) {
        S.erase(S.find(v[i - k]));
        S.insert(v[i]);
        it = S.rbegin();
        ans.push_back(*it);
    }
    int res = 0;
    for (int i = 0; i < ans.size(); ++i) {
        if (ans[i] <= t)
            ++res;
    }
    cout << res;
    return 0;
}