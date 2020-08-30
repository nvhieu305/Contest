#include<iostream>
#include<string>
using namespace std;
void sinh(int n, int a[], int &stop) {
	int i = n - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i < 0) stop = 1;
	else {
		a[i] = 1;
	}
}
void resutl(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) cout << "A";
		else cout << "B";
	}
	cout << " ";
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n, stop = 0; cin >> n;
		int a[15] = {};
		while (stop == 0) {
			resutl(n, a);
			sinh(n, a, stop);
		}
		stop = 0;
		cout << endl;
	}
	return 0;
}