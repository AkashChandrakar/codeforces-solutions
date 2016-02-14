#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int c1, c2, c3;
int main() {
    int n, elm;
    cin >> n;
    c1 = c2 = c3 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    bool ans = 1;
    for (int i = 0; i < n; ++i) {
        if (v[i] == 25)
            ++c1;
        else if (v[i] == 50) {
            if (c1 == 0) {
                ans = 0;
                break;
            }
            --c1;
            ++c2;
        } else {
            if (c2 >= 1 && c1 >= 1) {
                --c2;
                --c1;
            } else if (c1 >= 3) {
                c1 -= 3;
            } else {
                ans = 0;
                break;
            }
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}