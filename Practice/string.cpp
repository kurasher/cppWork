#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    t = "entered character is ... ";
    cout << "please input chaaracter : ";

    cin >> s;
    cout << t + s << endl;
    return 0;
}