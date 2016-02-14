#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int n, pi;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> pi;
        sum += pi;
    }
    printf("%lf", sum / n);
    return 0;
}