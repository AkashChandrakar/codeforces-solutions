#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, ans;
set<int> s;
int main() {
    int n, m, elm;
    cin >> n >> m;
    ans.resize(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    for (int i = n - 1; i >= 0; --i) {
        s.insert(v[i]);
        ans[i + 1] = s.size();
    }
    for (int i = 0; i < m; ++i) {
        cin >> elm;
        cout << ans[elm] << endl;
    }
    return 0;
}