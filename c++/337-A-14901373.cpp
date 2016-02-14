#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, m, elm;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    int mn = v[n - 1] - v[0];
    for (int i = 1; i + n - 1 < m; ++i) {
        mn = min(mn, v[i + n - 1] - v[i]);
    }
    cout << mn << endl;
    return 0;
}