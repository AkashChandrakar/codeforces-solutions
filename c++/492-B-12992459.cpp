#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, l, elm;
    cin >> n >> l;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    int maxdiff = 0;
    for (int i = 1; i < n; ++i) {
        maxdiff = max(maxdiff, v[i] - v[i - 1]);
    }
    double ans = (maxdiff * 1.0) / 2;
    ans = max(ans, v[0] * 1.0);
    ans = max(ans, (l - v[n - 1]) * 1.0);
    printf("%lf",ans);
    return 0;
}