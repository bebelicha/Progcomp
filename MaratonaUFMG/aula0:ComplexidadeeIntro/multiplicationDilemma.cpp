//https://codeforces.com/gym/101972/problem/A
//Multiplication Dilemma
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> especial(int n) {
	vector<int> ret;
	bool neg = n < 0;
	if (neg) n = -n;
	string s = to_string(n);
	for (int i = 0; i < s.length(); ++i) {
		int num = (ll(s[i] - '0')) * pow(10, s.length() - 1 - i);
		if (num)
			ret.push_back(num);
	}
	if (neg)
		for (int i = 0; i < ret.size(); ++i) {
			ret[i] = -ret[i];
		}
	return ret;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		vector<int> av = especial(a);
		vector<int> bv = especial(b);

		for (int i = 0; i < av.size(); ++i) {
			for (int j = 0; j < bv.size(); ++j) {
				if (i || j) cout << "+ ";
				cout << av[i] << " x " << bv[j] << " \n"[i == av.size() - 1 && j == bv.size() - 1];
			}
		}
	}

}