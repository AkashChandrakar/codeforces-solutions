#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if ((b / m) >= a) {
        cout << a * n;
        return 0;
    }
    int jump = m;
    int s = 0;
    while (jump <= n) {
        s += b;
        jump += m;
    }
    jump -= m;
    s += min(b, (n - jump) * a);
    cout << s;
    return 0;
}