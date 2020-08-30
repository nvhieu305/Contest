#include<iostream>
#include<string>
#include<vector>
using namespace std;
void sinh(int n, int a[], int& stop) {
	int  i = n - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i >= 0) a[i] = 1;
	else stop = 1;
}
int main() {

	int n, k; cin >> n >> k;
	int a[100] = {},b[100], stop = 0;
	vector <string> kq;

	while (stop == 0) {
		int index = 0;
		b[0] = (a[0] == 0) ? 1 : 0;
		if (b[0] == 1) index++;
		for (int i = 1; i < n; i++) {
			if (a[i] == 0) {
				b[i] = b[i - 1] + 1;
				index = max(index, b[i]);
			}
			else b[i] = 0;
		}
		if (index == k) {
			string tmp = "";
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) tmp += 'A';
				else tmp += 'B';
			}
			kq.push_back(tmp);
		} 
		sinh(n, a, stop);
	}
	cout << kq.size() << endl;
	for (int i = 0; i < kq.size(); i++) cout << kq[i] << endl;
	return 0;
}