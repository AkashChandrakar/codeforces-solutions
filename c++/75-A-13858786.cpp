#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
vector<ii> v;
int removezero(int n) {
    int res, rem;
    res = 0;
    int ten = 1;
    while (n) {
        rem = n % 10;
        n /= 10;
        if (rem) {
            res = res + rem * ten;
            ten *= 10;
        }
    }
    return res;
}
int main() {
    int a, b, c, ccomp;
    cin >> a >> b;
    c = a + b;
    a = removezero(a);
    b = removezero(b);
    c = removezero(c);
    if (c == a+b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}