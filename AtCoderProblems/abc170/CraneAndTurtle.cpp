#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    int x, y;
    if((Y-2*X) % 2 == 1){
        y = -1;
    }else{
        y = (Y - 2*X)/2;
    }


    if(y < 0){
        cout << "No" << endl;
    }else{
        x = X - y;
        if(x < 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}