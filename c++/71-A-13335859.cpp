#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 110;
vector<int> v;
int main() {
    int t, n, elm;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        if (s.length() <= 10)
            cout << s << endl;
        else {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }

    return 0;
}