#include <iostream>
using namespace std;

int main(){
    int R, G;
    cin >> R >> G;

    // G = (R + ans) / 2
    // ans =  2 * G - R
    int ans = 2 * G - R;
    cout << ans << endl;
}