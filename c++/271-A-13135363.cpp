#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
bool isdist(int n) {
    stringstream ss;
    ss << n;
    string s = ss.str();
    set<char> S(s.begin(), s.end());
    return s.length() == S.size();
}
int main() {
    int n, elm;
    cin >> n;
    ++n;
    while (1) {
        if (isdist(n)) {
            cout << n;
            break;
        }
        ++n;
    }
    return 0;
}