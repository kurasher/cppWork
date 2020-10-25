#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long> A(N);
    long ans = 0;

    for (int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    for(int i = 1; i < N; i++){
        if(A.at(i-1) > A.at(i)){
            long sub = A.at(i-1) - A.at(i);
            A.at(i) += sub;
            ans += sub;
        }
    }

    cout << ans << endl;

}