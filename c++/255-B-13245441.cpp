#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    string s;
    int cx, cy;
    cx = cy = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'x')
            ++cx;
        else
            ++cy;
    }
    if (cx > cy) {
        for (int i = 0; i < (cx - cy); ++i) {
            cout << "x";
        }
    } else {
        for (int i = 0; i < (cy - cx); ++i) {
            cout << "y";
        }
    }
    return 0;
}