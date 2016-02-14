#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ii> v;
int main() {
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        v.push_back(ii(a, b));
    }
    sort(v.begin(), v.end());
    int beg, end;
    beg = 0;
    end = 1;
    bool ans = 0;
    while (end < v.size()) {
        if (v[beg].second > v[end].second) {
            ans = 1;
            break;
        }
        ++beg;
        ++end;
    }
    if (ans) {
        cout << "Happy Alex";
    } else {
        cout << "Poor Alex";
    }
    return 0;
}