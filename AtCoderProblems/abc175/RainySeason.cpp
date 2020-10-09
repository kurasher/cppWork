#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    if(S == "SSS"){
        cout << 0 << endl;
    }else if (S == "RSR" || S == "SRS" || S == "RSS" || S == "SSR"){
        cout << 1 << endl;
    }else if(S == "RRR"){
        cout << 3 << endl;
    }else{
        cout << 2 << endl;
    }
}