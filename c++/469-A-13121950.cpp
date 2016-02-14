#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int p, q, n;
    cin >> n;
    set<int> S;
    cin >> p;
    int level;
    for (int i = 0; i < p; ++i) {
        cin >> level;
        S.insert(level);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> level;
        S.insert(level);
    }
    if (S.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}