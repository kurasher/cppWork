#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    vector<string> dayOfTheWeek = {"A", "SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN"};

    for(int i = 0; i < dayOfTheWeek.size(); i++){
        if(dayOfTheWeek[i] == S){
            cout << i << endl;
        }

    }
}