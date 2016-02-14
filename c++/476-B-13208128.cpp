#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int mask, dest, src, cnt;
vector<int> v;

void alloneszeros(int n, int destination) {
    if (n == mask) {
        if (destination == src)
            ++cnt;
        return;
    }
    alloneszeros(n + 1, destination + 1);
    alloneszeros(n + 1, destination - 1);
}

int main() {
    int n, elm;
    string s1, s2;
    dest = 0;
    src = 0;
    mask = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == '-')
            --src;
        else if (s1[i] == '+')
            ++src;
        if (s2[i] == '-')
            --dest;
        else if (s2[i] == '+')
            ++dest;
        else
            ++mask;
    }
    if (mask == 0) {
        if (src == dest) {
            printf("%.9lf", 1.0);
        } else {
            printf("%.9lf", 0.0);
        }
        return 0;
    }
    alloneszeros(0, dest);
    double ans = (cnt * 1.0) / (1 << mask);
    printf("%.9lf", ans);
    return 0;
}