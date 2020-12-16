#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long int COUNT = N;
    for(long long i = 1; i*i <= N; i++ ){
        if( N % i == 0){
            long long count = i + (N / i) - 2;
            if(count < COUNT){
                COUNT = count;
            }
        }
    }

    cout << COUNT << endl;
}