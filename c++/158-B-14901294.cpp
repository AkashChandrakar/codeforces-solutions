#include <bits/stdc++.h>
using namespace std;
int cnt[5];
int main() {
    int n, a, res = 0, cnt13;
    scanf("%d", &n);
    for (int var = 0; var < n; ++var) {
        scanf("%d", &a);
        cnt[a]++;
    }
    res += cnt[4];
    res += (cnt[2] / 2);
    cnt13 = min(cnt[1], cnt[3]);
    res += cnt13;
    cnt[1] -= cnt13;
    cnt[3] -= cnt13;
    if (cnt[1]) {
        res += (cnt[1] / 4);
        int rem = cnt[1] % 4;
        if (rem != 3 && rem != 0) {
            if (cnt[2] & 1)
                cnt[2] = 0;
            res += 1;
        } else if (rem == 3) {
            res += 1;
        }
    } else if (cnt[3]) {
        res += cnt[3];
    }
    if (cnt[2] & 1) {
        res += 1;
    }
    printf("%d", res);
    return 0;
}