#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    long long a1, a2, a3, x, y, z;
    cin >> a1 >> a2 >> a3;
    long long product = 1L * a1 * a2 * a3;
    x = sqrt(product / (a1 * a1));
    y = sqrt(product / (a2 * a2));
    z = sqrt(product / (a3 * a3));
    cout << (x + y + z) * 4;
    return 0;
}