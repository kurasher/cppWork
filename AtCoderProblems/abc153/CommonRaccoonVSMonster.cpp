#include <bits/stdc++.h>
using namespace std;

int main(){
    long long H;
    int N;
    long long sumA = 0;
    long A = 0;


    cin >> H >> N;
    for(int i = 0; i < N; i++){
        cin >> A;
        sumA += A;
    }

    if(sumA < H){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}