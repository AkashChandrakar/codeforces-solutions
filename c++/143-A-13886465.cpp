#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> points;
int main() {
    int r1, r2, c1, c2, d1, d2;
    int u, v, x, y;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    u = (c1 - r2 + d1) >> 1;
    y = (r2 - c1 + d1) >> 1;
    v = (c2 - r2 + d2) >> 1;
    x = (r2 - c2 + d2) >> 1;
    set<int> s;
    s.insert(u), s.insert(v), s.insert(x), s.insert(y);
    if (x <= 0 || y <= 0 || u <= 0 || v <= 0 || s.size() != 4 || x >= 10 || y >= 10
            || u >= 10 || v >= 10) {
        cout << "-1";
        return 0;
    }
    cout << u << " " << v << endl;
    cout << x << " " << y << endl;
    return 0;
}