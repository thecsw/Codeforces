#include <iostream>

using namespace std;

int main() {
    int i, k, r, am;
    cin >> k >> r;
    for (i=1; i<=1000; i++) {
        if (((i*k)-r)%10==0) {
            cout << i << endl;
            return 0;
        } else if ((i*k)%10==0) {
			cout << i << endl;
			return 0;
		}
    }
    return 0;
}
