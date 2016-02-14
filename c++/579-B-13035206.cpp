#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
map<int, ii> hash;
map<int, ii>::reverse_iterator it;
const int sz = 1010;
int teammate[sz];
int main() {
    int n, st;
    cin >> n;
    fill(teammate, teammate + sz, -1);
    for (int i = 2; i <= 2 * n; ++i) {
        for (int j = 1; j < i; ++j) {
            cin >> st;
            hash[st] = ii(i, j);
        }
    }
    for (it = hash.rbegin(); it != hash.rend(); ++it) {
        ii p = it->second;
        if (teammate[p.first] == -1 && teammate[p.second] == -1) {
            teammate[p.first] = p.second;
            teammate[p.second] = p.first;
        }
    }
    for (int i = 1; i <= 2 * n; ++i) {
        cout << teammate[i] << " ";
    }
    return 0;
}