#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<string>> match(N, vector<string>(N));

    for(int i = 0; i < N; i++){
         for(int j = 0; j < N; j++){
             match.at(i).at(j) = "-";
        }   
    }

    for(int i = 0; i < M; i++){
        match.at(A.at(i)-1).at(B.at(i)-1) = "o";
        match.at(B.at(i)-1).at(A.at(i)-1) = "x";
    }


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == N-1){
                cout << match.at(i).at(j);
            }else{
                cout << match.at(i).at(j) << " ";
            }
        }
        cout << endl;
    }
}