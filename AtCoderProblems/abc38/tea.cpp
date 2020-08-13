#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int lastChar = S.size();

    if(S[lastChar - 1] == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}