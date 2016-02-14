#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<string, string> ii;
vector<ii> v;
const int sz = 100010;
map<string, int> H;
map<int, string> revH;
map<string, int>::iterator it;
int parent[sz];
int child[sz];
int cntr = 0;
int assign(string s) {
    H[s] = cntr;
    revH[cntr] = s;
    parent[cntr] = cntr;
    child[cntr] = cntr;
    ++cntr;
    return cntr - 1;
}

int inline getindex(string s) {
    return H[s];
}

int getchild(int i) {
    while (i != child[i])
        i = child[i];
    return i;
}
int main() {
    int n;
    int p1, p2, p;
    string s1, s2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        if (H.find(s1) == H.end())
            p1 = assign(s1);
        else
            p1 = getindex(s1);
        if (H.find(s2) == H.end())
            p2 = assign(s2);
        else
            p2 = getindex(s2);
        parent[p2] = p1;
        child[p1] = p2;
    }
    for (it = H.begin(); it != H.end(); ++it) {
        p = it->second;
        if (p == parent[p]) {
            p1 = getchild(p);
            v.push_back(ii(it->first, revH[p1]));
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}