#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int max = -1;
    int count = 0 ;
    int res = -1;

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    
    for(int i = 2; i <= 1000; i++){
        count = 0;
        for(int j = 0; j < N; j++){
            if(A.at(j) % i == 0){
                count++;
            }
            if(max <= count){
                max = count;
                res = i;
            }
        }
    }

    cout << res << endl;



}