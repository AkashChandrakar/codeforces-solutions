#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int b, a, ca, cb, cc;
    cin >> a >> b;
    ca = cb = cc = 0;
    for (int i = 1; i <= 6; ++i) {
        int diffa = abs(i - a);
        int diffb = abs(i - b);
        if (diffa == diffb)
            ++cc;
        else if (diffa < diffb)
            ++ca;
        else
            ++cb;
    }
    cout << ca << " " << cc << " " << cb;
    return 0;
}