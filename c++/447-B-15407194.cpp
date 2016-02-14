#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int main() {
    string s;
    int k, elm;
    cin >> s;
    cin >> k;
    for (int i = 0; i < 26; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int mx = *max_element(v.begin(), v.end());
    ll res = 0;
    for (int i = 0; i < s.length(); ++i) {
        res = res + v[s[i] - 'a'] * (i + 1);
    }
    int j = s.length() + 1;
    while (k--) {
        res = res + j * mx;
        ++j;
    }
    cout << res;
    return 0;
}