#include<iostream>
#include<string>
#include<vector>

using namespace std;
int n, s, a[1003], k, b[1000], stop = 0;
void khoiTao() {
	for (int i = 1; i <= k; i++) b[i] = i;
}

void next_() {
	int i = k; 
	while (i > 0 && b[i] == n - k + i) i--;
	if (i > 0) {
		b[i] = b[i] + 1;
		int p = b[i];
		while (i <= k) {
			b[i++] = p++;
		}
	}
	else stop = 1;
} 
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		cin >> n >> s;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		k = 1;
		while (k <= n) {
			khoiTao();
			stop = 0;
			while (stop == 0) {
				int dem = 0;
				for (int i = 1; i <= k; i++) {
					dem += a[b[i]];
				}
				if (dem == s) {
					cout << k << endl;
					k = 100;
					break;
				}
				next_();
			}
			k++;
		}
		if (k != 101) cout << -1 << endl;
	}
	return 0;
}