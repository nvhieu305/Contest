#include<iostream>
#include<string>
using namespace std;
void gray(string s) {
	int n = s.size();
	string tmp = "";
	tmp = s;
	for (int i = 0; i < n - 1; i++) {
		if (tmp[i] == '1') {
			tmp[i + 1] = (tmp[i + 1] == '1') ? '0' : '1';
		}
	}
	cout << tmp << endl;
}

int main() {
	int test; cin >> test;
	while (test-- > 0) {
		string s; cin >> s;
		gray(s);
	}
	return 0;
}