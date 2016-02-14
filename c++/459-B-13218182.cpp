#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    ll c1, c2, ans;
    c1 = c2 = 1;
    int i = 1;
    while (i < n && v[i] == v[i - 1]) {
        ++i;
        ++c1;
    }
    if (i == n) {
        cout << v[n - 1] - v[0] << " " << (c1 * (c1 - 1)) / 2;
    } else {
        i = n - 2;
        while (v[i] == v[i + 1]) {
            --i;
            ++c2;
        }
        cout << v[n - 1] - v[0] << " " << c1 * c2;
    }
    return 0;
}