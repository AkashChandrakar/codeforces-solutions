#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const double PI = 3.1415926536;
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.rbegin(), v.rend());
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)
            res += (v[i] * v[i]);
        else
            res -= (v[i] * v[i]);
    }
    printf("%.9lf", res * PI);
    return 0;
}