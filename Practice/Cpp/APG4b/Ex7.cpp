// 条件式の結果は真のとき1、偽の時0になる
// 1 -> true, 0 -> false
// bool型　->true or falseのみ

#include <iostream>
using namespace std;

int main(){
    bool a = true;
    bool b = false;
    bool c = true;

    if (a) {
        cout << "At";
    }
    else {
        cout << "Yo";
    }

    if (!a && b) {
        cout << "Bo";
    }
    else if (!b || c) {//true || true, false || true, false || false
        cout << "Co";
    }
    
    if (a && b && c) {//いずれかはfalse
        cout << "foo!";
    }
    else if (true && false) {
        cout << "yeah!";
    }
    else if (!a || c) {//c = true
        cout << "der";
    }
    
    cout << endl;
}