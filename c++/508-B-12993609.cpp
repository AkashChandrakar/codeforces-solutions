#include <bits/stdc++.h>
using namespace std;

void swap(int i, int j, string &s) {
    char c;
    c = s[i];
    s[i] = s[j];
    s[j] = c;
}

int iseven(string s) {
    for (int i = 0; i < s.length(); ++i) {
        int n = s[i] - '0';
        if (n % 2 == 0)
            return 1;
    }
    return 0;
}

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int j, n = s[len - 1] - '0';
    if (iseven(s)==0)
        cout << "-1";
    else {
        bool done = 0;
        for (int i = 0; i < len - 1 && !done; ++i) {
            j = s[i] - '0';
            if (j % 2 == 0) {
                if (n > j) {
                    swap(i, len - 1, s);
                    done = 1;
                    break;
                }
            }
        }
        if (!done) {
            for (int i = len - 2; i >= 0 && !done; --i) {
                j = s[i] - '0';
                if (j % 2 == 0) {
                    if (j > n) {
                        swap(i, len - 1, s);
                        done = 1;
                        break;
                    }
                }
            }
        }
    cout << s;
    }
    return 0;
}