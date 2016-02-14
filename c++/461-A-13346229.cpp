#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
vector<ll> v;
int main() {
    int n, elm;
    cin >> n;
    if (n == 1) {
        cin >> n;
        cout << n;
        return 0;
    } else if (n == 2) {
        cin >> n >> elm;
        cout << 2 * (n + elm);
    } else {
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> elm;
            sum += elm;
            v.push_back(elm);
        }
        sort(v.begin(), v.end());
        ll total = 2 * sum;
        ll currsum = sum;
        for (int i = 0; i < n - 2; ++i) {
            currsum -= v[i];
            total += currsum;
        }
        cout << total;
    }
    return 0;
}