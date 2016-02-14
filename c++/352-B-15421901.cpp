#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ii> res;
const double PI = 3.1415926536;
const int sz = 100010;
int isAP(vector<int> &v) {
    //return common difference;
    if (v.size() == 1)
        return 0;
    int diff = v[1] - v[0];
    for (int i = 2; i < v.size(); ++i) {
        if ((v[i] - v[i - 1]) != diff)
            return -1;
    }
    return diff;
}
int main() {
    int n, elm, flag;
    vector<vector<int> > seq(sz, vector<int>());
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> elm;
        seq[elm].push_back(i);
    }
    for (int i = 0; i < sz; ++i) {
        if (seq[i].size() > 0) {
            flag = isAP(seq[i]);
            if (flag != -1) {
                res.push_back(ii(i, flag));
            }
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i].first << " " << res[i].second << endl;
    }
    return 0;
}