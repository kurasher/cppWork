#include <iostream>
using namespace std;

int main(){
    int K;
    cin >> K;

    if(K % 2 == 0){
        cout << -1 << endl;
    }else{
        int count = 1;
        long long num = 1;
        while(count < K){
            if(num % K == 0){
                break;
            }
            num = (num*10+1);
            cout << num <<endl;
            count++;
        }
        cout << count << endl;
    }

}