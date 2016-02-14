#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    int n, e;
    vector<int> a, h;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> e;
        h.push_back(e);
        cin >> e;
        a.push_back(e);
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (h[i] == a[j])
                ++cnt;
            if (a[i] == h[j])
                ++cnt;
        }
    }
    cout << cnt;
    return 0;
}