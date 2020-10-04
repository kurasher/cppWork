#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int count = 0;
    for(int a = 1; a < N; a++){
        count += (N-1)/a;
    }
    cout << count << endl;
}