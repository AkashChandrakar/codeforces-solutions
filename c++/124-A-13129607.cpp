#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = a + 1; i <= n; ++i) {
        if ((n - i) <= b)
            ++ans;
    }
        cout << ans;
    return 0;
}