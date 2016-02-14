#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int sz = 510;
const int limit = 100100;
vector<int> primes;
bool sieve[limit];
int matrix[sz][sz];

void generate_primes() {
	fill(sieve, sieve + limit, true);
	for (int i = 2; i * i < limit; ++i) {
		if (sieve[i]) {
			for (int j = i * i; j < limit; j += i) {
				sieve[j] = false;
			}
		}
	}
	for (int i = 2; i < limit; ++i) {
		if (sieve[i]) {
			primes.push_back(i);
		}
	}
}
int main() {
	int n, m, sum, idx, diff;
	generate_primes();
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
	int res = INT_MAX;

	for (int i = 0; i < n; ++i) {
		sum = 0;
		for (int j = 0; j < m; ++j) {
			idx = lower_bound(primes.begin(), primes.end(), matrix[i][j])
					- primes.begin();
			if (idx == primes.size())
				--idx;
			diff = abs(matrix[i][j] - primes[idx]);
			sum += diff;
		}
		res = min(res, sum);
	}
	for (int j = 0; j < m; ++j) {
		sum = 0;
		for (int i = 0; i < n; ++i) {
			idx = lower_bound(primes.begin(), primes.end(), matrix[i][j])
					- primes.begin();
			if (idx == primes.size())
				--idx;
			diff = abs(matrix[i][j] - primes[idx]);
			sum += diff;

		}
		res = min(res, sum);
	}
	cout << res;
	return 0;
}