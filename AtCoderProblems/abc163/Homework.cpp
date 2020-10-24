#include <iostream>
using namespace std;

int main(){
    int N;
    int M;
    int A = 0;

    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> A;
        N -= A;
    }

    if(N < 0){
        cout << -1 << endl;
    }else{
        cout << N << endl;
    }
}