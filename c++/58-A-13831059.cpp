#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    s2 = "hello";
    cin >> s1;
    int i, j;
    i = j = 0;
    while (i < s1.length() && j < s2.length()) {
        if (s1[i] == s2[j])
            ++j;
        ++i;
    }
    if (j == s2.length())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}