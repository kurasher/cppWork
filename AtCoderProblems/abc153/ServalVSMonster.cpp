#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, A;
    int count = 0;
    cin >> H >> A;

    while (H > 0 ){
        H -= A;
        count++;
    }

    cout << count << endl;
}