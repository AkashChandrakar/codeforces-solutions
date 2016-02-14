#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
list<int> L;
list<int>::iterator it;
set<int> S;
int main() {
    int n, elm;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c >> elm;
        if (c == '-') {
            if (S.find(elm) == S.end()) {
                L.push_front(elm);
            }
            S.insert(elm);
            L.push_back(-elm);
        } else {
            S.insert(elm);
            L.push_back(elm);
        }
    }
    int cnt, res;
    cnt = res = 0;
    for (it = L.begin(); it != L.end(); ++it) {
        if (*it < 0)
            --cnt;
        else
            ++cnt;
        res = max(res, cnt);
    }
    cout << res;
    return 0;
}