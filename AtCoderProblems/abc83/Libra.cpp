#include <iostream>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int left, right;
    left = A + B;
    right = C + D;

    if(left > right){
        cout << "Left" << endl;
    }else if(left < right){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }
}