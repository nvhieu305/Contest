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
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int n, k; cin >> n >> k;
		int a[1004] = {}, stop = 0;
		for (int i = n - k; i < n; i++) a[i] = 1;
		for (int i = 0; i < n; i++) cout << a[i];
		cout << endl;
		while (stop == 0) {
			sinh(n, a, stop);
			int tmp = 0;
			for (int i = 0; i < n; i++) if (a[i] == 1) tmp++;
			if (k == tmp) {
				for (int i = 0; i < n; i++) cout << a[i];
				cout << endl;
			}		
		}
	}
	return 0;
}