#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

bool checkun(string a, string b) {
    bool ans1, ans2;
    ans1 = ans2 = 1;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] <= b[i]) {
            ans1 = 0;
        }
        if (a[i] >= b[i]) {
            ans2 = 0;
        }
    }
    return ans1 | ans2;
}

int main() {
    int n, elm;
    string s, left, right;
    bool ans;
    cin >> n;
    cin >> s;
    left = s.substr(0, n);
    right = s.substr(n, 2 * n);
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    if (checkun(left, right))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}