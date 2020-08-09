// 1行で取得する場合
// getline()を使う
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string s, t;
//   getline(cin, s); // 変数sで入力を一行受け取る
//   getline(cin, t); // 変数tで入力を一行受け取る

//   cout << "一行目 " << s << endl;
//   cout << "二行目 " << t << endl;
// }


#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int answer = 1;//最初の値

    for(int i = 1; i < S.size(); i = i+2){
        // char op = S.at(i);
        // cout << S.at(i) << endl;
        if(S.at(i) == '+'){
            answer += 1;
        }else{
            answer -= 1;
        }

    }

    cout << answer << endl;
}