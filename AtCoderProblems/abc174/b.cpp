#include <iostream>
using namespace std;

int main(){
    long long N, D;
    cin >> N >> D;
    int count = 0;

    for(int i = 0; i < N ; i++){
        long long X, Y;
        cin >> X >> Y;
        
        if(0 <= X*X + Y*Y && X*X + Y*Y <= D*D){
            count++;
        }else {

        }
    }

    cout << count << endl;

}