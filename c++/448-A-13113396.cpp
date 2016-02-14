#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int n, a1, a2, a3, a, b1, b2, b3, b;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    a = a1 + a2 + a3;
    b = b1 + b2 + b3;
    a = ceil(a * 1.0 / 5);
    b = ceil(b * 1.0 / 10);
    if ((a + b) <= n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}