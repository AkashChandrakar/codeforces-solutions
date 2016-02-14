#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n) {
        ++ans;
        n = n & (n - 1);
    }
    cout << ans;
    return 0;
}