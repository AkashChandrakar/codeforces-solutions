#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, temp;
int main() {
    int n, elm, prev;
    ll res;
    cin >> n;
    prev = 0;
    res = 2 * n - 1;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        res += abs(prev - elm);
        prev = elm;
    }
    cout << res;
    return 0;
}