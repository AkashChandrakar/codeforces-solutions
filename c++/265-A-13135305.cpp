#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {

    int i, j;
    string s, t;
    cin >> s >> t;
    i = 0;
    j = 0;
    while (j < t.length()) {
        if (s[i] == t[j])
            ++i;
        ++j;
    }
    cout << i + 1;
    return 0;
}