#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, m;
    cin >> n;
    int prefixsum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        prefixsum += elm;
        v.push_back(prefixsum);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> elm;
        int ans = lower_bound(v.begin(), v.end(), elm) - v.begin();
        cout << ans + 1 << endl;
    }
    return 0;
}