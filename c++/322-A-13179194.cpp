#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, m;
    cin >> n >> m;
    cout << (n + m - 1) << endl;
    for (int i = 1; i <= m; ++i) {
        cout << 1 << " " << i << endl;
    }
    for (int j = 2; j <= n; ++j) {
        cout << j << " " << 1 << endl;
    }
    return 0;
}