#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n ; i++)

int main(){
    int N, K;
    cin >> N >> K;
    int initNum = 1;
    rep(i, N){
        if(initNum < K){
            initNum *= 2;
        }else{
            initNum += K;
        }
    }

    cout << initNum << endl;
}