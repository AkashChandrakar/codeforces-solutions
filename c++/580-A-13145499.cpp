#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int a[100010];
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int res = 1;
    int tres = 1;
    a[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] >= v[i - 1]) {
            a[i] = a[i - 1] + 1;
        } else {
            a[i] = 1;
        }
        res = max(res, a[i]);
    }
    cout << res;
    return 0;
}