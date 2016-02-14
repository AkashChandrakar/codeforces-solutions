#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &A) {
	partial_sum(A.begin(), A.end(), A.begin());
	int left, right, mn, ans, n;
	n = A.size();
	ans = INT_MAX;
	for (int i = 0; i < n - 1; ++i) {
		left = A[i];
		right = A[n - 1] - A[i];
		mn = abs(left - right);
		ans = min(ans, mn);
	}
	return ans;
}

int main() {
	//cin.sync_with_stdio(false);
	//cout.sync_with_stdio(false);
	int n, k;
	scanf("%d %d", &n, &k);
	if ((2 * k) > (n - 1)) {
		printf("-1");
		return 0;
	}
	cout << n * k << endl;
	int cnt, j;
	for (int i = 1; i <= n; ++i) {
		cnt = k;
		j = i + 1;
		if (j == n + 1)
			j = 1;
		while (cnt--) {
			printf("%d %d\n", i, j);
			++j;
			if (j == n + 1)
				j = 1;
		}
	}
	return 0;
}