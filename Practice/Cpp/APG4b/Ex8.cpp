#include <iostream>
#include <string>
using namespace std;

int main() {
    int p;
    int price;
    int N;
    string text;

    cin >> p;

    // パターン2
    if (p == 2) {
        cin >> text;
    }else{

    }

    cin >> price >> N;

    if(p == 2){
        cout << text << "!" << endl;
    }
    cout << price * N << endl;
}
