#include <iostream>
#include <vector>
using namespace std;

template <class T> void chmax(T& a, T b){
    if (a < b){
        a = b;
    }
}

int main(){
    int N; long long W;
    cin >> N >> W;
    vector <long long> weight(N), value(N) ;

    vector <vector <long long>> dp(N+1,vector <long long> (W + 1, 0));

    for (int i=0;i<N;++i) cin >> weight[i] >> value[i] ;

    for (int i=0;i<N;++i){
        for (int w=0 ; w<=W; ++w){
            if(w-weight[i] >= 0){
                chmax(dp[i+1][w], dp[i][w-weight[i]]+value[i]) ;
            }
            chmax(dp[i+1][w], dp[i][w]) ;
        }
    }

    cout << dp[N][W] << endl ;

    for(int i=0 ; i<N+1 ; ++i){
        for(int j=0 ; j<W+1 ; ++j)
            cout << " " << dp[i][j];
        cout << endl ;
    }


}
