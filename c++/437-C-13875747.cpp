#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
const int sz = 1010;
int cnt[sz];
int cost[sz];
int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> cost[i];
    }
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        sum += min(cost[a], cost[b]);
    }
    cout << sum;
    return 0;
}