#include<iostream>
#include<string>
#include<vector>

using namespace std;

void next_(int a[], int& stop) {
	int i = 20;
	while (i >= 0 && a[i] == 9) {
		a[i] = 0;
		i--;
	}
	if (i == -1) stop = 0;
	else {
		a[i] = 9;
	}
}
long long so(int a[]) {
	long long tmp = 0;
	for (int i = 0; i < 21; i++) {
		tmp = (long long)tmp * 10 + a[i];
	}
	return tmp;
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n; cin >> n;
		int a[21] = {};
		a[20] = 9;
		int stop = 0;
		while (stop == 0) {
			if (so(a) % n == 0) {
				cout << so(a) << endl;
				break;
			}
			next_(a, stop);
		}
	}
	return 0;
}