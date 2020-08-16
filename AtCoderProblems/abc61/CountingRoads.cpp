#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> cityRoads(N);

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;

        cityRoads.at(a-1) += 1;
        cityRoads.at(b-1) += 1;
    }

    for(int i = 0; i < N; i++){
        cout << cityRoads.at(i) << endl;
    }
}