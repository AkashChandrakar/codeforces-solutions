#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int main() {
    int n, elm, mx, mn;
    vector<int> v, maximum(100010), minimum(100010);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    mx = v[n - 1];
    mn = v[0];
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            minimum[i] = v[i + 1] - v[i];
            maximum[i] = mx - v[i];
        } else if (i == (n - 1)) {
            minimum[i] = v[i] - v[i - 1];
            maximum[i] = v[i] - mn;
        } else {
            minimum[i] = min(v[i + 1] - v[i], v[i] - v[i - 1]);
            maximum[i] = max(mx - v[i], v[i] - mn);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << minimum[i] << " " << maximum[i] << endl;
    }
    return 0;
}