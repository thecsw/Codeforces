// Sagindyk Urazayev
// http://codeforces.com/problemset/problem/467/A
#include <iostream>

using namespace std;

int main() {
	int n, i, room, q, p;
	room = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> p >> q;
		if ((q - p) > 1) {
			room++;
		}
	}
	cout << room << endl;
	return 0;
}
