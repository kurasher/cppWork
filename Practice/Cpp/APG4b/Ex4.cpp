//異なる型同士の代入
//int と double
//交互に入れることが可能
//int a = 10;
//double b = i;
//ただし、小数点以下は切り捨てられる。

#include <iostream>
using namespace std;

int main(){
    int seconds = 60 * 60 * 24 * 365;

    cout << seconds << endl;
    cout << 2 * seconds << endl;
    cout << 5 * seconds << endl;
    cout << 10 * seconds << endl;
}