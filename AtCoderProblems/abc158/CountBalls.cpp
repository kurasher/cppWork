#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, A, B;
    cin >> N >> A >> B;

    long long totalAB = A+B;
    long long count = 1; 

    long long aki = 0;
    count = N / (totalAB);

    if(count * totalAB + A > N){
        aki = N - count * totalAB;
        cout << count*A + aki << endl;
    }else{
        cout << count*A + A << endl;
    }

}