#include <bits/stdc++.h>
using namespace std;

int main(){
    long N, X;
    string S;

    cin >> N >> X >> S; 

    for(int i = 0; i < N; i++){
        if(S.at(i) == 'x'){
            X--;
            if(X < 0){
                X = 0;
            }
        }else{
            X++;
        }
    }

    cout << X << endl;
}