#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, idx;
    cin >> n;
    for (int i = 0; i < 12; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.rbegin(), v.rend());
    int mn = 0;
    idx = 0;
    while (n > 0 && idx < 12) {
        n -= v[idx];
        ++idx;
        ++mn;
    }
    if (n > 0)
        cout << "-1";
    else
        cout << mn;
    return 0;
}