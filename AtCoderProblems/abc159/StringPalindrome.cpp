#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int N = S.size();
    bool flag = true;

    // 0123456
    // akasaka
    for(int i = 0; i < N / 2; i++){
        if(S.at(i) != S.at(N-1-i)){//Sが回文でない
            flag = false;
        }
    }

    // 1234567
    // akakaka
    // 123
    // aka
    int mid = (N-1)/2;
    for(int i = 0; i < mid/2; i++){
        if(S.at(i) != S.at(mid-1-i)){//Sが回文でない
            flag = false;
        }
    }


    // 1234567
    // akakaka
    //     567
    //     aka
    mid = (N+3)/2 - 1;
    for(int i = mid; i < (N + mid) / 2; i++){
        if(S.at(i) != S.at(N-1-i)){//Sが回文でない
            flag = false;
        }
    }


    if(flag == false){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}