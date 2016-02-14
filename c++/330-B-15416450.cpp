#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, temp;
set<int> S;
int main() {
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        S.insert(i);
    }
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        S.erase(x);
        S.erase(y);
    }
    cout << n - 1 << endl;
    int mid = *S.begin();
    for (int i = 1; i <= n; ++i) {
        if (i != mid) {
            cout << mid << " " << i << endl;
        }
    }
    return 0;
}