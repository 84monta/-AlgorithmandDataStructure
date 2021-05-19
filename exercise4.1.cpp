#include <iostream>
using namespace std;

int tri(int N){
    if (N == 0) return 0;
    else if (N==1) return 0;
    else if (N==2) return 1;
    else return tri(N-1)+tri(N-2)+tri(N-3);
    }

int main(){
    int N;

    cin >> N ;

    cout << tri(N) << endl;
}