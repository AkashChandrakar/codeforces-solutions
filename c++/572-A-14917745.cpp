#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> va, vb;

int main() {
    int na, nb, k, m, elm;
    cin >> na >> nb;
    cin >> k >> m;
    for (int i = 0; i < na; ++i) {
        cin >> elm;
        va.push_back(elm);
    }
    for (int i = 0; i < nb; ++i) {
        cin >> elm;
        vb.push_back(elm);
    };
    sort(va.begin(), va.end());
    sort(vb.rbegin(), vb.rend());
    if (va[k - 1] < vb[m - 1])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}