#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, temp;
int cache[26];
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        ++cache[s[i] - 'a'];
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (cache[i] & 1)
            ++cnt;
    }
    if (cnt <= 1 || cnt % 2 != 0)
        cout << "First";
    else
        cout << "Second";
    return 0;
}