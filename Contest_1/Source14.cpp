#include<iostream>
#include<string>
using namespace std;
int next_(int n, int k, int a[], int b[]) {
	int i = k;
	while (i > 0 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		return k;
	}
	else {
		a[i]++;
		int p = a[i];
		while (i <= k) a[i++] = p++;

		int count = 0;
		for (int j = 1; j <= k; j++) {
			int tmp = 0;
			for (int m = 1; m <= k; m++) {
				if (a[j] == b[m]) {
					tmp = 1;
					break;
				}
			}
			if (tmp == 0) count++;
		}
		return count;
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n, k; cin >> n >> k;
		int a[1005], b[1004];
		for (int i = 1; i <= k; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		cout << next_(n, k, a, b) << endl;
	}
	return 0;
}