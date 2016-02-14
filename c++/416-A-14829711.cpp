#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

string transform(string s) {
    string res;
    if (s == ">")
        res = "<=";
    else if (s == ">=")
        res = "<";
    else if (s == "<")
        res = ">=";
    else
        res = ">";
    return res;
}

int main() {
    int n;
    ll low, high;
    high = 2 * pow(10, 9);
    low = -1 * high;
    string s;
    char decision;
    ll num;
    bool possible = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s >> num >> decision;
        if (decision == 'N')
            s = transform(s);
        //cout << s << " " << num << " " << decision << endl;
        if (s == ">") {
            if (num + 1 > low)
                low = num + 1;
        } else if (s == ">=") {
            if (num > low)
                low = num;
        } else if (s == "<") {
            if (num - 1 < high)
                high = num - 1;
        } else {
            if (num < high)
                high = num;
        }
        if (low > high)
            possible = 0;
    }
    if (possible)
        cout << high;
    else
        cout << "Impossible";
    return 0;
}