#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    int amount = v[0];
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            v[i] = v[i] - amount;
            if (v[i] < 0)
                v[i] += n;
        } else {
            v[i] = (amount + v[i]) % n;
        }
    }
    bool ans = 1;
    for (int i = 0; i < n; ++i) {
        if (i != v[i]) {
            ans = 0;
            break;
        }
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}