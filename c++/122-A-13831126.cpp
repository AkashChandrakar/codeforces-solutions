#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = { 4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777 };
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < 12; ++i) {
        if (n % a[i] == 0) {
            ans = 1;
            break;
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}