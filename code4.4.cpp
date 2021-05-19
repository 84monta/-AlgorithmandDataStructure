#include <iostream>
using namespace std ;

int gcd(int m,int n){
    if (n == 0) return m;

    return gcd(n, m%n);
}

int main(){
    cout << "GDC = " << gcd(30,21) << endl;
}