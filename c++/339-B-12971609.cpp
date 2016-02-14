#include <bits/stdc++.h>
using namespace std;

int main() {
    long long ans = 0;
    int start, end, d;
    int n, m;
    cin >> n >> m;
    start = 1;
    for (int i = 0; i < m; ++i) {
        cin >> end;
        d = end - start;
        if (d < 0)
            d += n;
        ans += d;
        start = end;
    }
    cout << ans;
    return 0;
}