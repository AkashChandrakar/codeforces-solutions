#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    ll n, m, mn1, mn2, mx, div;
    cin >> n >> m;
    mx = n - m + 1;
    mx = (mx * (mx - 1)) / 2;
    mn1 = n % m;
    div = n / m;
    mn2 = m - mn1;
    mn2 = (mn2 * (div - 1) * div) / 2;
    mn1 = (mn1 * div * (div + 1)) / 2;
    cout << mn1 + mn2 << " " << mx;
    return 0;
}