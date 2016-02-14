#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v1, v2;

int main() {
    int n, a, b, q, t;
    ll elm, sum = 0L;
    cin >> n;
    v1.push_back(0);
    v2.push_back(0);
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        sum += elm;
        v1.push_back(sum);
        v2.push_back(elm);
    }
    sort(v2.begin(), v2.end());
    for (int i = 1; i <= n; ++i) {
        v2[i] += v2[i - 1];
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> t >> a >> b;
        if (t == 1) {
            cout << v1[b] - v1[a - 1] << endl;
        } else {
            cout << v2[b] - v2[a - 1] << endl;
        }
    }
    return 0;
}