#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, a, b, elm;
    cin >> a >> b;
    int a1 = min(a, b);
    int a2 = (a + b - 2 * a1) / 2;
    cout << a1 << " " << a2;
    return 0;
}