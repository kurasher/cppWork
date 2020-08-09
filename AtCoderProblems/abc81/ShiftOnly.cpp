#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n ; i++)

int main(){
    int N;
    cin >> N;

    int count = 0;
    int min = 10000;


    rep(i, N){
        int a;
        cin >> a;
        count = 0;
        while(a % 2 == 0){
            a = a / 2;
            count++;
        }

        if(count < min){
            min = count;
        }
    }

    cout << min << endl;

}