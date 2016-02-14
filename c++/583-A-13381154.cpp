#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<char, int> ii;
vector<int> v;
set<int> row, col;
int main() {
    int n, elm, a, b;
    cin >> n;
    if (n == 1) {
        cin >> a >> b;
        cout << 1;
        return 0;
    }
    int days = 1;
    vector<int> ans;
    for (int i = 0; i < n * n; ++i) {
        cin >> a >> b;
        if (row.count(a) == 0 && col.count(b) == 0) {
            ans.push_back(days);
            row.insert(a);
            col.insert(b);
        }
        ++days;
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}