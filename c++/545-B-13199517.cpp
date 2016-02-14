#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
string s, t, ans;
int main() {
    int n, elm;
    cin >> s >> t;
    n = s.length();
    int hdist = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i])
            ++hdist;
    }
    if (hdist & 1)
        cout << "impossible";
    else {
        ans = s;
        bool turns = 1;
        for (int i = 0; i < n; ++i) {
            if (s[i] != t[i]) {
                if (turns) {
                    turns = 0;
                    ans[i] = s[i];
                } else {
                    turns = 1;
                    ans[i] = t[i];
                }
            }
        }
    }
    cout << ans;
    return 0;
}