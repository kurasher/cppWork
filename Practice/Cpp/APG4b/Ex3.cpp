//多くの場合、割り算はできるだけ後の方で行うようにした方が正しい結果になる

//任意の数値AとBがあるとき、
//(A/B) * B + (A%B) = A
//である

#include <iostream>
using namespace std;

int main(){
    cout << 100*(100+1) / 2 << endl;
}