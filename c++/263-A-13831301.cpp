#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    int x, y, e;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> e;
            if (e == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2);
    return 0;
}