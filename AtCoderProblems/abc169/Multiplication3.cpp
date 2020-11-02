#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll A;
    double B;
    cin >> A >> B;
    ll B100 = B * 100 + 0.5;
    // 0.01 * 100 = 0.999999....をなくすために+0.5をする

    cout << A*(B100) / 100 << endl;
}