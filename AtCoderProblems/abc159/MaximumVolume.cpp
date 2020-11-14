#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    long double L;
    cin >> L;

    long double L3 = L / 3;

    //小数点以下の長さを指定
    cout << fixed << setprecision(15) << L3*L3*L3 << endl;
}