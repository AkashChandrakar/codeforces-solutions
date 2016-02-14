#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int cnt1s(int n) {
    int res = 0;
    while (n) {
        ++res;
        n &= (n - 1);
    }
    return res;
}
int main() {
    int n, m, k, elm;
    cin >> n >> m >> k;
    for (int i = 0; i < m; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int fedr, res = 0;
    cin >> fedr;
    for (int i = 0; i < m; ++i) {
        int commom = fedr ^ v[i];
        if (cnt1s(commom) <= k)
            ++res;
    }
    cout << res;
    return 0;
}