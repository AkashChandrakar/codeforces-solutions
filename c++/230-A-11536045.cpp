#include <bits/stdc++.h>
using namespace std;
struct dragon {
    int x, y;
    bool operator<(const dragon &d) const {
        return x < d.x;
    }
};
dragon d[1001];
int main() {
    int n, s;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> d[i].x >> d[i].y;
    }
    bool f = 1;
    sort(d, d + n);
    for (int i = 0; i < n && f; ++i) {
        if (s > d[i].x)
            s += d[i].y;
        else
            f = 0;
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}