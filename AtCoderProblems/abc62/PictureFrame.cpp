#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)n ; i++)
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> a(H);

    for(int i = 0; i < H; i++){
        cin >> a.at(i);
    }

    for(int i = 0; i < W+2; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < H; i++){
        cout << "#" << a.at(i) << "#" << endl;
    }

    for(int i = 0; i < W+2; i++){
        cout << "#";
    }
    cout << endl;

}