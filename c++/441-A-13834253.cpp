#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    int n, e, v, k;
    vector<int> ans;
    cin >> n >> v;

    for (int i = 1; i <= n; ++i) {
        cin >> k;
        bool f = 0;
        for (int j = 0; j < k; ++j) {
            cin >> e;
            if (v > e)
                f = 1;
        }
        if (f)
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}