#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<string, string> ss;
vector<vector<int> > v(sz);
vector<int> p;

vector<int> factors(int n) {
    vector<int> res;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            while ((n % i) == 0) {
                n = n / i;
            }
            res.push_back(i);
        }
    }
    return res;
}
int main() {
    //trial division
    string s;
    cin >> s;
    int cu, cl;
    cu = cl = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (islower(s[i]))
            ++cl;
        else
            ++cu;
    }
    if (cu > cl) {
        for (int i = 0; i < s.length(); ++i) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}