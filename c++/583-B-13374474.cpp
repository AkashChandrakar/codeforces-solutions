#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<char, int> ii;
vector<int> v;
set<int> s;
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    bool forw = 1;
    int cnt = 0;
    int ai = 0;
    while (n) {
        if (forw) {
            for (int i = 0; i < v.size(); ++i) {
                if (v[i] != -1) {
                    if (ai >= v[i]) {
                        ++ai;
                        v[i] = -1;
                        --n;
                    }
                }
            }
            if (n == 0)
                break;
            ++cnt;
            forw = 0;
        } else {
            for (int i = v.size() - 1; i >= 0; --i) {
                if (v[i] != -1) {
                    if (ai >= v[i]) {
                        ++ai;
                        v[i] = -1;
                        --n;
                    }
                }
            }
            if (n == 0)
                break;
            ++cnt;
            forw = 1;
        }
    }
    cout << cnt;
    return 0;
}