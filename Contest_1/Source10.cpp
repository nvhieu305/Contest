#include<iostream>

using namespace std;
void gray(string s) {
	int n = s.size();
	string tmp = "";
	tmp = s;
	for (int i = n - 2; i >= 0; i--) {
		if (tmp[i] == '1') {
			tmp[i + 1] = (tmp[i + 1] == '0') ? '1' : '0';
		}
	}
	cout << tmp << endl;
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		string s;
		cin >> s;
		gray(s);
	}
	return 0;
}