// Sagindyk Urazayev
// http://codeforces.com/contest/39/problem/H
#include <iostream>

using namespace std;

int con(int, int); // function prototype

int main() {
	int mult[11][11];
	int k, i, j, n;
	k = i = j = 0;
	cin >> k;
	for (i = 1; i < k; i++)
		for (j = 1; j < k; j++)
			cout << con(i * j, k) << ' ';		
		cout << ' ' << endl;
	return 0;
}

int con(int l, int m) {
	int res, i, a[11], n;
	res = i = n = 0;
	while (l) {
		a[n++] = l % m;
		l = l / m;
	}
	for (i = n - 1; i >= 0; i--)
		res = res * 10 + a[i];
	return res;
}
