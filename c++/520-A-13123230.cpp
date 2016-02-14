#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    set<char> hash;
    for (int i = 0; i < s.length(); ++i) {
        char c = tolower(s[i]);
        hash.insert(c);
    }
    if (hash.size() == 26) {
        cout << "YES";
    } else
        cout << "NO";
    return 0;
}