#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, total;
    cin >> N >> M;
    total = N+M;

    cout << (total*(total-1) / 2 - N*M) << endl;
}