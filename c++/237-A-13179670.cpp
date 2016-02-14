#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int v[110];

int main() {
    int res, tres;
    res = tres = 1;
    int n, h, m, ph, pm;
    ph = pm = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> h >> m;
        if (ph == h && pm == m)
            ++tres;
        else
            tres = 1;
        res = max(res, tres);
        ph = h, pm = m;
    }
    cout << res;
    return 0;
}