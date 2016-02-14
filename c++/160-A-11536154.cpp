#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main() {
    int n;
    cin >> n;
    int sum1 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum1 += arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int sum2 = arr[0];
    sum1 -= arr[0];
    int st = 1;
    for (int i = 1; i < n && sum2 <= sum1; ++i, ++st) {
        sum2 += arr[i];
        sum1 -= arr[i];
    }
    cout << st;
    return 0;
}