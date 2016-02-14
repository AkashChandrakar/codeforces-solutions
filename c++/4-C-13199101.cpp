#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
map<string, int> hsh;
int main() {
    int n, elm;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (hsh.find(s) == hsh.end()) {
            hsh[s] = 1;
            cout << "OK\n";
        } else {
            cout << s << hsh[s] << "\n";
            ++hsh[s];
        }
    }
    return 0;
}