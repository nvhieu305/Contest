#include<iostream>
#include<string>
#include<vector>
using namespace std;
void sinhHV(int n, int b[], int &stop) {
	int i = n - 1;
	while (i > 0 && b[i] > b[i + 1]) i--;
	if (i == 0) stop = 1;
	else {
		int k = n;
		while (b[i] > b[k]) k--;
		swap(b[k], b[i]);
		int l = i + 1, r = n;
		while (l < r) {
			swap(b[l], b[r]);
			l++;
			r--;
		}
	}
}
int main() {
	int n, k; cin >> n >> k;
	int a[105][105], b[104], stop = 0;
	int count = 0;
	//vector <vector <int>> kq;
	vector <int> kq;
	kq.clear();
	for (int i = 1; i <= n; i++) {
		b[i] = i;
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	while (stop == 0) {
		int tmp = 0;

		for (int i = 1; i <= n; i++) {
			tmp += a[i][b[i]];
		}

		if (tmp == k) {
			count++;
			//vector <int > kq_;
			//kq_.clear();
			for (int i = 1; i <= n; i++) {
				kq.push_back(b[i]);
			}
			//kq.push_back(kq_);
		}
		sinhHV(n, b, stop);
	}
	cout << count << endl;
	int t = 0;
	for (int i = 0; i < kq.size() / n; i++) {
		for (int j = 0; j < n; j++) {
			cout << kq[t++] << " ";
		}
		cout << endl;
	}
	return 0;
}