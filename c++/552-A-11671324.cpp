#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int table[110][110];
int main() {
    int n, a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; ++i) {
            for (int j = b; j <= d; ++j) {
                table[i][j]++;
            }
        }
    }
    ll s = 0;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            s += table[i][j];
        }
    }
    cout << s;
    return 0;
}