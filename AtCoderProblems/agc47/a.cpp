#include <iostream>
using namespace std;
#include <cmath>
#include <cstdio>
#include <iomanip>

bool is_integer(double x ){
    return floor(x)==x;
}

int main(){
    int N;
    cin >> N;
    double A[200001];

    for(int i = 0; i < N; i++){
        double num;
        cin >> num;
        A[i] = num * 1000;
    }   

    int count = 0;
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            if(is_integer((A[i]/1000)*(A[j])/1000) == true){
                // cout << i << ", " << j << endl;
                // cout << A[i] << " * " << A[j] << " = "<< A[i]*A[j] << endl;
                count++;
            }
        }
    }
    cout << count << endl;
}

