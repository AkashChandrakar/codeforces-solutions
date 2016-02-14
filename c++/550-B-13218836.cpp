#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, l, r, x;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int mask = v.size();
    if (mask == 0) {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end());
    int subsets = 1 << mask;
    vector<int> ans;
    int res = 0;
    for (int i = 1; i <= subsets; ++i) {
        ans.clear();
        for (int j = 0; j < mask; ++j) {
            if ((i & (1 << j)) != 0) {
                ans.push_back(v[j]);
            }
        }
        if (ans.size() >= 2 && ((ans[ans.size() - 1] - ans[0]) >= x)) {
            elm = accumulate(ans.begin(), ans.end(), 0);
            if (l <= elm && elm <= r)
                ++res;
        }

    }
    cout << res;
    return 0;
}