#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    bool flag = false;
    for(int i = 1; i < data.size(); i++){
        if(data.at(i-1) == data.at(i)){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
