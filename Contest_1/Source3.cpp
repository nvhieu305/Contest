#include<iostream>
#include<string>
using namespace std;
void sinh(int n, int a[]) {
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1]) i--;
	if (i <= 0) for (i = 1; i <= n; i++) cout << i << " ";
	else {
		int k = n;
		while (a[i] > a[k]) k--;
		swap(a[i], a[k]);
		int r = n, l = i + 1;
		while (l < r) {
			swap(a[l], a[r]);
			r--;
			l++;
		}
		for (i = 1; i <= n; i++) cout << a[i] << " ";
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n; cin >> n;
		int a[1004];
		for (int i = 1; i <= n; i++) cin >> a[i];
		sinh(n, a);
		cout << endl;
	}
	return 0;
}