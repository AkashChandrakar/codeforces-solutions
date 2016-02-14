#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const double PI = 3.1415926536;
int main() {
    string s;
    int cnt4, cnt7;
    cnt4 = cnt7 = 0;
    cin >> s;
    for (int i = 0; i < (int) s.length(); ++i) {
        if (s[i] == '4')
            ++cnt4;
        else if (s[i] == '7')
            ++cnt7;
    }
    if (cnt4 == 0 && cnt7 == 0)
        cout << "-1";
    else {
        if (cnt4 >= cnt7)
            cout << "4";
        else
            cout << "7";
    }
    return 0;
}