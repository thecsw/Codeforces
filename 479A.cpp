//Sagindyk Urazayev
//http://codeforces.com/problemset/problem/479/A
#include <iostream>
#include <string>

using namespace std;

int main() {
    string eq;
    int a, b, c, max, i;
    cin >> a >> b >> c;
    eq= "a  b  c";
    //manual input
    if ((a+b+c)>0) {
        max=a+b+c;
    }
    if ((a*b*c)>max) {
        max=a*b*c;
    }
    if ((a+b*c)>max) {
        max=a+b*c;
    }
    if ((a*b+c)>max) {
        max=a*b+c;
    }
    if (((a+b)*c)>max) {
        max=(a+b)*c;
    }
    if ((a*(b+c))>max) {
        max=a*(b+c);
    }
    cout << max << endl;
    return 0;
}
