#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
set<char> S;
char grid[110][110];
int main() {
    vector<ii> v;
    int n, m;
    char manager;
    cin >> n >> m;
    cin >> manager;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == manager) {
                v.push_back(ii(i, j));
            }
        }
    }
    int a, b;
    for (int i = 0; i < v.size(); ++i) {
        ii p = v[i];
        a = p.first;
        b = p.second;
        if (a > 0) {
            if (grid[a - 1][b] == manager || grid[a - 1][b] == '.')
                ;
            else
                S.insert(grid[a - 1][b]);
        }
        if (a < (n - 1)) {
            if (grid[a + 1][b] == manager || grid[a + 1][b] == '.')
                ;
            else
                S.insert(grid[a + 1][b]);
        }
        if (b > 0) {
            if (grid[a][b - 1] == manager || grid[a][b - 1] == '.')
                ;
            else
                S.insert(grid[a][b - 1]);
        }
        if (b < (m - 1)) {
            if (grid[a][b + 1] == manager || grid[a][b + 1] == '.')
                ;
            else
                S.insert(grid[a][b + 1]);
        }
    }
    cout << S.size();
    return 0;
}