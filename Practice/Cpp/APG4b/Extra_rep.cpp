#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    rep(i, 3){
        cout << "Hello : rep " << i << endl;
    }

    int N;
    cin >> N;
 
    int sum = 0; // 合計点を表す変数
    int x;       // 入力を受け取る変数
 
    rep(i, N) {
        cin >> x;
        sum += x;
    }
 
    cout << sum << endl;
}