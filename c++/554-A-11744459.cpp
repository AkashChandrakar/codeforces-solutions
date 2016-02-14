#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int res = (len+1) * 26 - len;
    cout << res;

}