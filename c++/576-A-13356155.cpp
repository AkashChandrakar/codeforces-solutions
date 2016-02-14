#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<string, string> ss;
vector<vector<int> > v(sz);
vector<int> p;

vector<int> factors(int n) {
    vector<int> res;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            while ((n % i) == 0) {
                n = n / i;
            }
            res.push_back(i);
        }
    }
    return res;
}
int main() {
    //trial division
    int n;
    cin >> n;
    if (n == 1) {
        cout << "0\n";
    } else if (n == 2) {
        cout << "1\n 2";
    } else if (n == 3) {
        cout << "2\n2 3";
    } else {
        for (int i = 2; i <= n; ++i) {
            v[i] = factors(i);
        }
        vector<int> res;
        for (int i = 2; i <= n; ++i) {
            if (v[i].size() <= 1) {
                res.push_back(i);
            }
        }
        cout << res.size() << endl;
        for (int i = 0; i < (int) res.size(); ++i) {
            cout << res[i] << " ";
        }
    }
    return 0;
}