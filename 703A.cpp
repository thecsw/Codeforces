//Sagindyk Urazayev
//codeforces.com/problemset/problem/703/A
#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, m, c, n, mm, cm;
    cin >> n;
    mm=cm=0;
    for (i=0; i<n; i++) {
        cin >> m >> c;
        if (m>c) {
            mm=mm+1;
        } 
        if (c>m) {
            cm=cm+1;
        }
        if (c==m) {
            
        }
    }
    if (cm>mm) {
        cout << "Chris" << endl;
    } 
    if (cm<mm) {
        cout << "Mishka" << endl;
    }
    if (cm==mm) {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
