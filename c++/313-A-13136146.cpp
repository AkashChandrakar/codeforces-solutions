#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    string s, elm;
    cin >> s;
    if (s[0] != '-') {
        cout << s;
        return 0;
    } else {
        elm = s;
        char c = elm[elm.size() - 1];
        elm.pop_back();
        string l = elm;
        elm.pop_back();
        elm.push_back(c);
        string sl = elm;
        if (sl[1] == '0')
            cout << "0";
        else if (l > sl)
            cout << sl;
        else
            cout << l;
    }
    return 0;
}