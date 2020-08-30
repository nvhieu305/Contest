#include<iostream>
#include<string>
using namespace std;

void sinh(int n, int a[], int &stop) {
	int i = n - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == -1) stop = 1;
	else a[i] = 1;
}
void gray1(int n, int a[]) {
	int b[1004];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
	for (int i = n - 2; i >= 0; i--) {
		if (b[i] == 1) {
			if (b[i + 1] == 0) b[i + 1] = 1;
			else b[i + 1] = 0;
			//b[i + 1] = (b[i + 1] == 0) ? 1 : 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << b[i];
	}
	cout << " ";
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n; cin >> n;
		int a[1005], stop = 0;
		for (int i = 0; i < n; i++) a[i] = 0;
		while (stop == 0) {
			gray1(n, a);
			sinh(n, a, stop);
		}
		cout << endl;
	} 
	return 0;
}