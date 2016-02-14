#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 110;
vector<int> v;
void lower(string &s) {
    for (int i = 0; i < s.length(); ++i) {
        s[i] = tolower(s[i]);
    }
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    lower(s1);
    lower(s2);
    if (s1 == s2)
        cout << "0";
    else if (s1 < s2)
        cout << "-1";
    else
        cout << "1";
    return 0;
}