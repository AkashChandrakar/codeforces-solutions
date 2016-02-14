#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    string s;
    cin >> s;
    string heavy, metal;
    string comp;
    heavy = "heavy";
    metal = "metal";
    int cntheavy = 0;
    ll res = 0;
    for (int i = 0; i + 4 < (int) s.length(); ++i) {
        comp = s.substr(i, 5);
        if (comp == heavy)
            ++cntheavy;
        else if (comp == metal)
            res += cntheavy;
    }
    cout << res << endl;
    return 0;
}