#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const int sz = 100010;
int dp[sz];

int main() {
    int n, elm, l, r;
    string s;
    cin >> s;
    cin >> n;
    for (int i = 2; i <= s.length(); ++i) {
        dp[i] = dp[i - 1];
        if (s[i - 1] == s[i - 2])
            ++dp[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        cout << dp[r] - dp[l] << endl;
    }
    return 0;
}