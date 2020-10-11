#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    long long count = 0;
    // cout << 50-'0' << endl;
    // int('0')  --> 48になる

    for(int i = 0; i < N.size(); i++){
        count += int(N.at(i)-'0');
    }

    if(count % 9 == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}