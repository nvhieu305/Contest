#include<iostream>
#include<string>
using namespace std;
void khoiTao(int n, int a[]) {
	for (int i = 1; i <= n; i++) a[i] = i;
}
void resutl(int n, int a[]) {
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}
void sinh(int n, int a[], int &stop) {
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1]) i--;
	if (i <= 0) stop = 1;
	else {
		int k = n;
		while (a[i] > a[k]) k--;
		swap(a[i], a[k]);
		int l = i + 1, r = n;
		while (l < r) {
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n; cin >> n;
		int a[1005], stop = 0;
		khoiTao(n, a);
		while (stop == 0) {
			resutl(n , a);
			sinh(n, a, stop);
		}
		cout << endl;
	} 
	return 0;
}