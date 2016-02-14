#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    int n, e;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> e;
        v.push_back(e);
    }
    int mn, mx;
    int imx, imn;
    mn = mx = v[0];
    imx = imn = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i] > mx) {
            mx = v[i];
            imx = i;
        }
        if (v[i] <= mn) {
            mn = v[i];
            imn = i;
        }
    }
    int ans = imx + (v.size() - 1 - imn);
    if (imx > imn)
        --ans;
    cout << ans;
    return 0;
}