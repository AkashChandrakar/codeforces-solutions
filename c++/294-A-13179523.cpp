#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int v[110];

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        v[i + 1] = m;
    }
    cin >> m;
    int x, y;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        v[x - 1] += (y - 1);
        v[x + 1] += (v[x] - y);
        v[x] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}