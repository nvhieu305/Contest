#include<iostream>
#include<string>
using namespace std;
int n, k, X[10005], stop = 0;
void sinhNext() {
	int i = k, R, S, D;
	while (i > 0 && X[i] == 1) i--;
	if (i > 0) {
		X[i] = X[i] - 1;
		D = k - i + 1;
		R = D / X[i];
		S = D % X[i];
		k = i;
		if (R > 0) {
			for (int j = i + 1; j <= i + R; j++) {
				X[j] = X[i];
			}
			k = k + R;
		}
		if (S > 0) {
			k += 1;
			X[k] = S;
		}
	}
	else stop = 1;
}
void resutl() {
	cout << '(';
	for (int i = 1; i <= k - 1; i++) cout << X[i] << " ";
	cout << X[k] << ") ";
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		cin >> n;
		k = 1;
		X[1] = n;
		while (stop == 0) {
			resutl();
			sinhNext();
		}
		cout << endl;
		stop = 0;
	}
	return 0;
}

//void generateNext(int* a, int n, bool& isOk) {
//	int i = n - 1, t = 1;
//	while (i >= 0 && (a[i] == 1 || a[i] == 0)) {
//		t = t + a[i];
//		a[i] = 0;
//		i = i - 1;
//	}
//	if (i >= 0) {
//		a[i] = a[i] - 1;
//		int x = t / a[i];
//		int y = t % a[i];
//		for (int j = 1; j <= x; j++)
//			a[i + j] = a[i];
//		a[i + x + 1] = y;
//	}
//	else isOk = true;
//}