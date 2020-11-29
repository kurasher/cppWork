#include <iostream>
using namespace std;

int main(){
    const int n = 123; //constをつけることで定数扱い
    // n = 456; // コンパイルエラー

    cout << n << endl;


    const int size = 32;
    double arr[size];
    // 配列のサイズは定数で無いとコンパイルエラーに成
    // int size = 32;
    // double arr[size]; //コンパイルエラー
}