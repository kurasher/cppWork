#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(vector<int>& list){
    for(int i = 0; i < list.size(); i++){
        for(int j = list.size() - 1; j > i; j--){
            if(list.at(j-1) > list.at(j)){
                swap(list.at(j-1), list.at(j));
            }
        }
    }
    return;
}

int main(){
    int N = 1;
    cin >> N;
    if(N < 0){
        N = 100;
    }
    vector<int> intList(N);
    vector<int> ansList(N);

    srand(time(NULL)); //　実行のたびに乱数を変化
    for(int i = 0; i < N; i++){
        int num = rand() % 1000; //0 ~ 999までの乱数を生成
        cout << num << " ";
        intList.at(i) = num; 
        ansList.at(i) = num;//答え確認用
    }
    cout << endl;

    BubbleSort(intList);
    sort(ansList.begin(), ansList.end());

    for(int num : intList){
        cout << num << " ";
    }
    cout << endl;


    // int count = 0;
    // for(int i = 0; i < intList.size(); i++){
    //     if(intList.at(i) == ansList.at(i)){
    //         count++;
    //     }
    // }
    // cout << count << endl;
}