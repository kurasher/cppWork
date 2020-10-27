#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<vector<int>> A(3, vector<int>(3));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A.at(i).at(j);
        }
    }

    cin >> N;
    int b = 0;
    for(int k = 0; k < N; k++){
        cin >> b;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(b == A.at(i).at(j)){
                    A.at(i).at(j) = -1;
                }
            }
        }   
    }


    if(A.at(0).at(0) + A.at(0).at(1) + A.at(0).at(2) == -3 
    || A.at(1).at(0) + A.at(1).at(1) + A.at(1).at(2) == -3 
    || A.at(2).at(0) + A.at(2).at(1) + A.at(2).at(2) == -3
    || A.at(0).at(0) + A.at(1).at(0) + A.at(2).at(0) == -3
    || A.at(0).at(1) + A.at(1).at(1) + A.at(2).at(1) == -3
    || A.at(0).at(2) + A.at(1).at(2) + A.at(2).at(2) == -3
    || A.at(0).at(0) + A.at(1).at(1) + A.at(2).at(2) == -3
    || A.at(2).at(0) + A.at(1).at(1) + A.at(0).at(2) == -3){
        cout << "Yes" << endl;

    }
    else{
        cout << "No" << endl;
    }

}