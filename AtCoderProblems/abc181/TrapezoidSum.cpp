#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long ans = 0;
    long long a = 0;
    long long b = 0;
    long long n = 0;

    for(int i = 0; i < N ; i++){
        cin >> a >> b;
        n = b-a+1;

        ans += (a+b) * n / 2;

    }

    cout << ans << endl;
}