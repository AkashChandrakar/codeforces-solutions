#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, elm;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    if (k > v.size())
        cout << "-1";
    else {
        int i;
        for (i = n - 1; k > 1; --i, --k) {

        }
        cout<<v[i]<<" "<<v[i];
    }
    return 0;
}