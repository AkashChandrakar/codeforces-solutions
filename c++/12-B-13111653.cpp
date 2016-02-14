#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    sort(s.begin(), s.end());
    int i = 0;
    while (i < (int) s.length() && s[i] == '0')
        ++i;
    if (i == s.length()) {
        bool ans = 1;
        for (int j = 0; j < t.length(); ++j) {
            if (t[j] != '0') {
                ans = 0;
                break;
            }
        }
        if (s==t)
            cout << "OK";
        else
            cout << "WRONG_ANSWER";
        return 0;
    }
    string ss = s[i] + s.substr(0, i) + s.substr(i + 1, s.length());
    if (ss == t)
        cout << "OK";
    else
        cout << "WRONG_ANSWER";
    return 0;
}