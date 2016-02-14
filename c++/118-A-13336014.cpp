#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 110;
vector<int> v;
int main() {
    int t, n, elm;
    string vowels = "aeiouAEIOUyY";
    set<char> h(vowels.begin(), vowels.end());
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (h.find(s[i]) == h.end()) {
            cout << "." << (char) tolower(s[i]);
        }
    }
    return 0;
}