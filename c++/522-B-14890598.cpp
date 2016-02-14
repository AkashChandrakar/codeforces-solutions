#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const int sz = 200010;
int w[sz], h[sz];
multiset<int, greater<int> > S;
multiset<int, greater<int> >::iterator it;
int main() {
    int n, swidth = 0, mxheight;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> h[i];
        swidth += w[i];
        S.insert(h[i]);
    }
    for (int i = 0; i < n; ++i) {
        swidth -= w[i];
        S.erase(S.find(h[i]));
        it = S.begin();
        mxheight = *it;
        cout << swidth * mxheight << " ";
        S.insert(h[i]);
        swidth += w[i];
    }
    return 0;
}