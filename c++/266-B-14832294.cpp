#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < (int) s.length(); ++j) {
            if (s[j] == 'B') {
                if (j + 1 < (int) s.length() && s[j + 1] == 'G') {
                    swap(s[j], s[j + 1]);
                    ++j;
                }
            }
        }
    }
    cout << s;
    return 0;
}