#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
       cout<<3<<endl;
       cout<<12<<endl;
       cout<<2<<endl;
    } else if (T == 4) {
        double a10001;
        a10001=500.0/3.0;
        cout<<fixed<<setprecision(3)<<a10001;
    } else if (T == 5) {
        cout<<15;
    } else if (T == 6) {
        double a12222;
        a12222=6*6+9*9;
        cout<<sqrt(a12222);
    } else if (T == 7) {
        cout<<110<<"\n"<<90<<"\n"<<0<<endl;
    } else if (T == 8) {
        const double PI=3.141593;
        cout<<10*PI<<"\n"<<PI*25<<"\n"<<125*4.0/3.0*PI<<endl;
    } else if (T == 9) {
        cout<<22;
    } else if (T == 10) {
        cout<<9;
    } else if (T == 11) {
        cout<<100/3.0;
    } else if (T == 12) {
        cout<<13<<"\n"<<"R";
    } else if (T == 13) {
        double a,b;
        int c;
        const double PI=3.141593;
        a=4.0/3.0*PI*64;
        b=4.0/3.0*PI*1000;
        c=(a+b);
        c=pow(c,1.0/3);
        cout<<c; 
    } else if (T == 14) {
        cout<<50;
    }
    return 0;
}