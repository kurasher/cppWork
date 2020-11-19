#include <bits/stdc++.h>
#include <iomanip> // setprecisionを使用するのに必要
// cout << std::fixed << std::setprecision(15) << y << endl;
using  namespace std;

int main(){
    double long Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;

    double long ans = 0;
    Gy = -Gy;

    // -Sy * (Gx - Sx) = (Gy - Sy) * (ans - Sx)
    if(Sy == Gy){
        cout << Gx << endl;
    }else{
        double long mol = -Sy * (Gx - Sx);
        double long den = Gy - Sy;
        ans = mol / den + Sx;
        cout << fixed << setprecision(15) << ans << endl;
    }
}