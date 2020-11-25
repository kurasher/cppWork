#include <bits/stdc++.h>
using namespace std;

int main(){
    long N;
    cin >> N;
    vector<long> A(N);

    for(long i = 0; i < N-1; i++){
        long num;
        cin >> num;

        A.at(num-1)++;
    }

    for(int i = 0; i < N; i++){
        cout << A.at(i) << endl;
    }
}