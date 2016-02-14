#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
set<ii> S;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int n, elm, x0, y0, x, y, a, b, hcf;
    cin >> n >> x0 >> y0;
    bool xaxis = 0, yaxis = 0;
    bool negx, negy;
    for (int i = 0; i < n; ++i) {
        negx = negy = 0;
        cin >> x >> y;
        a = (x0 - x);
        b = (y0 - y);
        if (a < 0)
            negx = 1;
        if (b < 0)
            negy = 1;
        a = abs(a);
        b = abs(b);
        hcf = gcd(a, b);
        a /= hcf;
        b /= hcf;
        if (a == 0 || b == 0) {
            if (a == 0)
                xaxis = 1;
            if (b == 0)
                yaxis = 1;
        } else {
            if ((negx ^ negy)) {
                S.insert(ii(-1 * a, b));
            } else {
                S.insert(ii(a, b));
            }
        }
    }
    cout << S.size() + xaxis + yaxis;
    return 0;
}