#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int main(){
    // min(a, b)小さい方を出力
    // max(a, b)大きい方を出力
    // swap(a, b)aとbの値を入れ替え
    // sort(vec.begin(), vec.end())配列変数vecを昇順に並び替え
    // reverse(vec.begin(), vec.end())配列変数vecの要素の並びを逆にする

    int minNum = min(5, 10);
    int maxNum = max(5, 10);
    cout << "minNum = " << minNum << endl;
    cout << "maxNum = " << minNum << endl;

    int a = 5;
    int b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
}

