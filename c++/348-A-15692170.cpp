#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int sz = 510;
const int limit = 100100;
vector<int> primes;
bool sieve[limit];
int matrix[sz][sz];

int main() {
	int n;
	ll k, sum = 0, mx = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> k;
		mx = max(mx, k);
		sum += k;
	}
	--n;
	if (sum % n == 0)
		cout << max(mx, sum / n);
	else
		cout << max(mx, sum / n + 1);
	return 0;
}