#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, res;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> res;
        v.push_back(res);
    }
    res = *max_element(v.begin(), v.end());
    cout<<res;
    return 0;
}