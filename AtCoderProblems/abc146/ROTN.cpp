#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    string S;
    cin >> S;

    vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
                                'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 
                                'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int num = 0;
    int sho = 0;
    for(int i = 0; i < S.size(); i++){
        for(int j = 0; j < alphabet.size(); j++){
            if(S[i] == alphabet[j]){
                num = N + j;
                sho = num % 26;
                cout << alphabet[sho];
                break;
            }
            num = 0;
            // cout << alphabet[j] << endl;
        }
    }
    cout << endl;
}