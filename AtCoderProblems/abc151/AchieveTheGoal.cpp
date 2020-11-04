#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, M;
    cin >> N >> K >> M;

    int sum = 0;
    int A = 0;

    for(int i = 0; i < N-1; i++){
        cin >> A;
        sum += A;
    }

    if(M*N <= sum+K){
        if(M*N <= sum){
            cout << 0 << endl;
        }else{
            cout << M*N - sum << endl;
        }
    }else{
        cout << -1 << endl;
    }


}