#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)n ; i++)
using namespace std;

int main(){
    int N ;
    cin >> N;
    int mean = 0;
    vector<int> vector(N);

    for(int i = 0 ; i < N ; i++){
        cin >> vector.at(i);
        mean += vector.at(i);
    }

    mean = mean / N;
    for(int i = 0; i < N; i++){
        if(vector.at(i) - mean < 0){
            cout << mean - vector.at(i) << endl;
        }else{
            cout << vector.at(i) - mean << endl;
        }
        
    }




}
