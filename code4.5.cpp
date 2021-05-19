#include <iostream>
using namespace std;

int F(int N){
    if (N == 1) return 1;
    else if( N == 0) return 0;

    return F(N-1) + F(N-2);
}

int main(){
    cout << F(30) << endl; 
}