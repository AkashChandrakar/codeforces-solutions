#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
vector<ll> v;
string s;

int toint(string s) {
    stringstream ss(s);
    int ans = 0;
    ss >> ans;
    return ans;
}
bool ismul(string s) {
    int n = toint(s);
    return n % 8 == 0;
}
int main() {
    cin >> s;

    int len = s.length();
    string temp = "";
    for (int i = 0; i < len; ++i) {
        temp.push_back(s[i]);
        if (ismul(temp)) {
            cout << "YES\n" << temp;
            return 0;
        }
        for (int j = i + 1; j < len; ++j) {
            temp.push_back(s[j]);
            if (ismul(temp)) {
                cout << "YES\n" << temp;
                return 0;
            }
            for (int k = j + 1; k < len; ++k) {
                temp.push_back(s[k]);
                if (ismul(temp)) {
                    cout << "YES\n" << temp;
                    return 0;
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
        temp.pop_back();
    }
    cout << "NO";

    return 0;
}