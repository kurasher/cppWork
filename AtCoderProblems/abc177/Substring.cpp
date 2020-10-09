#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    int index = 0;
    int count = 0;
    int ans = T.size();

    while(index + T.size() <= S.size()){
        count = 0;
        for(int j = 0;  j < T.size(); j++){
            if(S.at(index+j) != T.at(j)){
                count++;
            }
        }

        ans = min(count, ans);
        index++;

    }

    cout << ans << endl;

}