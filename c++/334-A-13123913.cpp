#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int sz = 110;
bool available[sz * sz];
vector<int> brother[sz];
int main() {
    int n;
    cin >> n;
    fill(available, available + sz * sz, true);
    int beg = 1;
    int end = n * n;
    int idx = 0;
    while (beg < end) {
        brother[idx].push_back(beg);
        brother[idx].push_back(end);
        idx = (idx + 1) % 4;
        ++beg;
        --end;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < brother[i].size(); ++j) {
            cout << brother[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}