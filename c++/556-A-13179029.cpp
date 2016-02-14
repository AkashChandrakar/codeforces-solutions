#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, c1, c0;
    string s;
    cin >> n;
    cin >> s;
    c1 = c0 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0')
            ++c0;
        else
            ++c1;
    }
    int rm = min(c0, c1);
    cout << n - 2 * rm;
    return 0;
}