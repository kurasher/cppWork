#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M+1; j++){
            if(j == 0){
                cin >> C.at(i);
            }else{
                cin >> A.at(i).at(j-1);
            }
        }
    } 

    
}