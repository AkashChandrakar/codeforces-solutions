#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<string, string> ss;
vector<ss> v;
vector<int> p;
int main() {
    int n, elm;
    string s1, s2, t;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        if (s1 > s2) {
            t = s1;
            s1 = s2;
            s2 = t;
        }
        v.push_back(ss(s1, s2));
    }
    bool ans = true;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        p.push_back(elm - 1);
    }
    int idx = p[0];
    string prev = v[idx].first;
    for (int i = 1; i < n; ++i) {
        idx = p[i];
        if (prev > v[idx].first && prev > v[idx].second) {
            ans = 0;
            break;
        }
        if (prev > v[idx].first)
            prev = v[idx].second;
        else
            prev = v[idx].first;
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}