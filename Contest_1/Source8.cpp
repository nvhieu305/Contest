#include<iostream>
#include<string>
using namespace std;
int n, a[10004], stop = 0;
void khoiTao() {
	int tmp = n;
	for (int i = 1; i <= n; i++) {
		a[i] = tmp;
		tmp--;
	}
}
void resutl() {
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}
void sinh() {
	int i = n - 1;
	while (i > 0 && a[i] < a[i + 1]) i--;
	if (i == 0) stop = 1;
	else {
		int k = n;
		while (a[i] < a[k]) k--;
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
		cin >> n;
		khoiTao();
		while (stop == 0) {
			resutl();
			sinh();
		}
		cout << endl;
		stop = 0;
	}
	return 0;
}