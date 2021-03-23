#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> children;
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		// the gap of every throw is every iteration of 'i'
		// use modulus arithmetic to maintain the order in an 'n' no. of
		// kids in a circle. Also, if it encounters the last kid in the circle
		// store the number itself instead of the remainder 0
		children.emplace_back((cnt + i) % n == 0 ? n : (cnt + i) % n);
		// increment the counter with 'i' (gap of throw)
		cnt += i;
	}
	// print the children that will receive the ball
	for (auto x : children) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
