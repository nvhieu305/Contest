#include<iostream>
#include<string>
using namespace std;
void next_(string s) {
	int n = s.size();
	int i = n - 2;
	while (i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i < 0) cout << "BIGGEST" << endl;
	else {
		int k = n - 1;
		while (s[i] >= s[k]) k--;
		swap(s[i], s[k]);
		int l = i + 1, r = n - 1;
		while (l < r) {
			swap(s[l], s[r]);
			l++;
			r--;
		}
		cout << s << endl;
	}

}
int main() {
	int test; cin >> test;
	while (test-- > 0) {
		int stt; cin >> stt; cout << stt << " ";
		string s; cin >> s;
		next_(s);
	}
	return 0;
}