#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    for (int i = 0; i < n; ++i) {
        fin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    int res = INT_MAX, tres;
    int idx;
    for (int i = 0; i < n; ++i) {
        idx = upper_bound(v.begin(), v.end(), 2 * v[i]) - v.begin();
        if (idx == n || v[idx] != 2 * v[i])
            --idx;
        tres = i + (n - (idx + 1));
        res = min(res, tres);
    }
    fout << res << endl;
    return 0;
}