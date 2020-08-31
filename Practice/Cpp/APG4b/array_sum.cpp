#include <bits/stdc++.h>
using namespace std;

//data のi番目以降の要素の総和を計算
int array_sum_from_i(vector<int> &data, int i){
    if(i == data.size()){
        return 0;
    }

    int s = array_sum_from_i(data, i+1);
    return data.at(i) + s;
}

// dataの全ての要素の総和を計算
int array_sum(vector<int> &data){
    return array_sum_from_i(data, 0);
}

int main(){
    vector<int> a = {0, 3, 9, 1, 5};
    cout << array_sum(a) << endl;
    
}