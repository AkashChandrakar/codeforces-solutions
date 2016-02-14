#include <bits/stdc++.h>
using namespace std;
int cache[110][110];
string s, t;
int issubseq(int i, int j, string a, string b) {
    if (j < 0)
        return 1;
    if (i < 0)
        return 0;
    if (cache[i][j] != -1)
        return cache[i][j];
    int ans;
    ans = issubseq(i - 1, j, a, b);
    if (a[i] == b[j]) {
        ans = ans | issubseq(i - 1, j - 1, a, b);
    }
    cache[i][j] = ans;
    return cache[i][j];
}

int main() {
    cin >> s;
    cin >> t;
    string p, q;
    p = s, q = t;
    fill(&cache[0][0], &cache[110][0], -1);
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    if (issubseq(p.length() - 1, q.length() - 1, p, q) == 1) {
        fill(&cache[0][0], &cache[110][0], -1);
        if (s.length() == t.length())
            cout << "array";
        else if (issubseq(s.length() - 1, t.length() - 1, s, t) == 1)
            cout << "automaton";
        else
            cout << "both";

    } else {
        cout << "need tree";
    }
    return 0;
}