#include <bits/stdc++.h>
using namespace std;


int main(){
    long N;
    cin >> N;
    set<long> number;

    for(long i = 1; i*i <= N; i++){
        if(N % i == 0){
            number.insert(i);
            number.insert(N / i);
        }
    }

    for(auto x : number){
        cout << x << endl;
    }
}