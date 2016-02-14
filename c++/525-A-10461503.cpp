//============================================================================
// Name        : codeforces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int hash[26];
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int minstep = 0;
    char cl, cu;
    cl = 'a';
    cu = 'A';
    for (int i = 0; i < s.length(); ++i) {
        int idx;
        if (i % 2 == 0) {
            idx = s[i] - cl;
            hash[idx]++;
        } else {
            idx = s[i] - cu;
            if (hash[idx] == 0) {
                minstep++;
            } else {
                hash[idx]--;
            }
        }
    }
    cout << minstep;
    return 0;
}