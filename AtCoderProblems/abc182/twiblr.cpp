#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if(2*A+100 >= B){
        cout << 2*A+100 - B << endl;
    }else{
        cout << 0 << endl;
    }
}