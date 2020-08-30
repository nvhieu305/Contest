#include<iostream>
#include<string>
using namespace std;
void sinh(int a[], int n, int k) {
	int i = k;
	while (i > 0 && a[i] == n - k + i) i--;
	if (i <= 0) for (i = 1; i <= k; i++) cout << i << " ";
	else {
		a[i]++;
		int tmp = a[i];
		while (i <= k) {
			a[i++] = tmp++;
		}
		for (i = 1; i <= k; i++) cout << a[i] << " ";
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n, k; cin >> n >> k;
		int a[1005];
		for (int i = 1; i <= k; i++) cin >> a[i];
		sinh(a, n, k);
		cout << endl;
	}
	return 0;
}