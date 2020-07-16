//コンパイルエラー：書いたプログラムの文法にミスが発生するエラー
//実行時エラー：プログラムの文法に間違いはなかったが、内容に致命的な間違いがあった時に発生するエラー
//論理エラー：プログラムは一見正しく動作しているが、その動作が実は正しくないときに発生するエラー（WAのこと）
#include <iostream>
using namespace std;

int main(){
    cout << "always" << 255 << endl;
    cout << "Hi, AtCoder" << endl;
}