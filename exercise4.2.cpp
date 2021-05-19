#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(50,-1);

int tri(int N){
    if (N == 0) return 0;
    else if (N==1) return 0;
    else if (N==2) return 1;
    else if (memo[N] != -1) return memo[N];
    else return memo[N] = tri(N-1)+tri(N-2)+tri(N-3);
    }

int main(){
    int N;

    cin >> N ;

    cout << tri(N) << endl;
}