#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main() {
    int n, y, a, b;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
    }
    y = 0;
    cin >> a >> b;
    for (int i = a; i < b; ++i) {
        y += arr[i];
    }
    cout << y;
    return 0;
}