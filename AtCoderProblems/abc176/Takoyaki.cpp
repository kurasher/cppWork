#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X, T;
    cin >> N >> X >> T;
    int tako = 0;
    int ans = 0;

    while(tako < N){
        tako += X;
        ans++;
    }

    cout << ans*T << endl;
}