#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count = 0;
    bool flag = false;

    for(int i = 0; i < N; i++){
        int D1, D2;
        cin >> D1 >> D2;

        if(D1 == D2){
            count++;
        }else{
            count = 0;
        }

        if(3 <= count){
            flag = true;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}