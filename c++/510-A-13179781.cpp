#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
char c[100][100];

int main() {
    int n, m;
    cin >> n >> m;
    fill(&c[0][0], &c[100][0], '#');
    int j = 0;
    for (int i = 1; i < n; i += 2, ++j) {
        if (j % 2 == 0) {
            for (int k = 0; k < m - 1; ++k) {
                c[i][k] = '.';
            }
        } else {
            for (int k = 1; k < m; ++k) {
                c[i][k] = '.';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << c[i][j];
        cout << endl;
    }
    return 0;
}