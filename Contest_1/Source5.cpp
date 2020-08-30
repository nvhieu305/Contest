#include<iostream>
#include<string>
using namespace std;
void sinh(int n, int k, int a[], int &stop) {
	int i = k;
	while (i > 0 && a[i] == n - k + i) i--;
	if (i <= 0) stop = 1;
	else {
		a[i]++;
		int p = a[i];
		while (i <= k) a[i++] = p++;
	}
}
void resutl(int k, int a[]) {
	for (int i = 1; i <= k; i++) cout << a[i];
	cout << " ";
}
void khoiTao(int k, int a[]) {
	for (int i = 1; i <= k; i++) a[i] = i;
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n, k; cin >> n >> k;
		int a[15], stop = 0;
		khoiTao(k, a);
		while (stop == 0) {
			resutl(k, a);
			sinh(n, k, a, stop);
		}
		stop = 0;
	}
	return 0;
}