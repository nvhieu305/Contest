#include<iostream>
#include<string>
using namespace std;
void sinh(string s, int n) {
	int i = n - 1;
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if (i < 0) cout << s << endl;
	else {
		s[i] = '1';
		cout << s << endl;
	}
}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		string s; cin >> s;
		int n = s.size();
		sinh(s, n);
	}
	return 0;
}