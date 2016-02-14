#include <bits/stdc++.h>
using namespace std;
int a[10010];
int n, k;
vector<int> v;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        v.push_back(k);
    }
    long long ans = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        ans += abs(i + 1 - v[i]);
    }
    cout << ans;
    return 0;
}