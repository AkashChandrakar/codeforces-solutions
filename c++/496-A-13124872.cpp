#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int maxdiffuclty(int n) {
    int ans = v[1] - v[0];
    for (int i = 2; i < n; ++i) {
        ans = max(ans, v[i] - v[i - 1]);
    }
    return ans;
}
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int mn = INT_MAX;
    for (int i = 1; i < n - 1; ++i) {
        int elm = v[i];
        v.erase(v.begin() + i);
        int tmin = maxdiffuclty(n);
        mn = min(mn, tmin);
        v.insert(i + v.begin(), elm);
    }
    cout << mn;
    return 0;
}