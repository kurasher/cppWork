#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    int N;
    N = S.size();

    int count = 0;

    for(int i = 0; i < N /2; i++){
        if(S[i] != S[N-1-i]){
            count++;
        }
    }

    cout << count << endl;

}