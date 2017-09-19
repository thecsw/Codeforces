#include <iostream>
#include <set>

using namespace std;

int fir[1000010];

int main() {
	multiset<int> sec;
	multiset<int> thi;
	int n, x, i, y;
	n=x=i=0;
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> fir[i];	
	}
	for (i=1; i<=n-1; i++) {
		cin >> x;
		sec.insert(x);
	}
	for (i=1; i<=n-2; i++) {
		cin >> y;
		thi.insert(y);			
	}
	for (i=1; i<=n; i++) {
		if (sec.find(fir[i])==sec.end()) {
			cout << fir[i] << endl;
			break;
		} else { 
			sec.erase(sec.find(fir[i])); 
		}
	}
	for (i=1; i<=n; i++) {
		if (thi.find(fir[i])==thi.end()) {
			cout << fir[i] << endl;
			break;
		} else { 
			thi.erase(thi.find(fir[i])); 
		}
	}
	return 0;
}
