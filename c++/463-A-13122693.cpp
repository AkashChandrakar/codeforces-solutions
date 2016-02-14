#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ii> v;
int main() {
    int n, s, x, y;
    cin >> n >> s;
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if ((s > x) || (s == x && y == 0)) {
            if (ans == -1) {
                ans = (100 - y) % 100;
            } else {
                ans = max(ans, (100 - y) % 100);
            }
        }
    }
    cout << ans;
    return 0;
}