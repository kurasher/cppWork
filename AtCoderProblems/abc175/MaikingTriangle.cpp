#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; 
    cin >> N;

    vector<int> triangle(N);
    for(int i = 0; i < N; i++){
        cin >> triangle.at(i);
    }

    sort(triangle.begin(), triangle.end());

    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                if(triangle.at(k) != triangle.at(j) &&
                    triangle.at(i) != triangle.at(j) &&
                    triangle.at(k) + triangle.at(j) > triangle.at(i)){
                        ans++;
                    }
            }
        }
    }

    cout << ans << endl;

}