#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
int a[105][105], n;
int m, b[105], stop = 0;
bool check = false;
vector<string> kq;

void sinh() {
	int i = m;
	while (i > 0 && b[i] == 1) {
		b[i] = 0;
		i--;
	}
	if (i > 0) {
		b[i] = 1;
	}
	else stop = 1;
}
void kt() {
	bool oke = true;
	int h = 1, c = 1;
	for (int i = 1; i <= m; i++) {
		if (b[i] == 0) h = h + 1;
		else c = c + 1;
		if (a[h][c] == 0 || h > n || c > n) {
			oke = false;
			break;
		}
	}
	if (oke == true) {
		check = true;
		string s = "";
		for (int i = 1; i <= m; i++) {
			if (b[i] == 0) s += 'D';
			else s += 'R';
		}
		kq.push_back(s);
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		m = n * 2 - 2;
		stop = 0;
		check = false;
		kq.clear();
		if (a[1][1] == 0) cout << -1 << endl;
		else {
			while (stop == 0) {
				//for (int i = 1; i <= m; i++) cout << b[i];
				//cout << endl;
				kt();
				sinh();
			}
			if (check == false) cout << -1 << endl;
			else {
				sort(kq.begin(), kq.end());
				for (int i = 0; i < kq.size(); i++) cout << kq[i] << " ";
				cout << endl;
			}
		}
		
	}
	return 0;
}