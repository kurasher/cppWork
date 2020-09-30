// Reference URL
// http://www1.cts.ne.jp/~clab/hsample/Sort/Sort5.html

#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


void RadixSort(vector<int>& list, int N, int R){
    vector<int> rad(N);//基数をしまう配列
    vector<int> y(N);//作業用配列

    int i, j, k;
    int m = 1;//基数を取り出す桁

    while(m <= R){
        for(i = 0; i < N; i++){
            rad.at(i) = (list.at(i) / m) % 10;//基数を取り出してrad[i]に保存
        }

        k = 0;//配列の添え字
        for(i = 0; i <= 9; i++){
            for(j = 0; j < N; j++){
                if(rad.at(j) == i){//基数の小さいモノから
                    y.at(k) = list.at(j);//配列yにコピー
                    k++;
                }
            }
        }

        for(i = 0; i < N; i++){
            list.at(i) = y.at(i);//コピーし直す
        }

        m *= 10;//基数を取り出す桁を一つ上げる
    }

    return;
}

int main(){
    int N = -1;//ソートするデータ数
    int R = 1000;//ソートするデータから取り出す基数の上限
    cin >> N;
    if(N < 0){
        N = 100;
    }
    vector<int> intList(N);
    vector<int> ansList(N);

    srand(time(NULL)); //　実行のたびに乱数を変化
    for(int i = 0; i < N; i++){
        int num = rand() % 1000; //0 ~ 999までの乱数を生成 3桁
        cout << num << " ";
        intList.at(i) = num; 
        ansList.at(i) = num;//答え確認用
    }
    cout << endl;

    RadixSort(intList, N, R);
    sort(ansList.begin(), ansList.end());

    cout << "--RADIX SORT--" << endl;
    for(int num : intList){
        cout << num << " ";
    }
    cout << endl;

    cout << "--ANSER--" << endl;
    for(int num : intList){
        cout << num << " ";
    }
    cout << endl;

    //一致した数
    int count = 0;
    for(int i = 0; i < intList.size(); i++){
        if(intList.at(i) == ansList.at(i)){
            count++;
        }
    }
    cout << count << endl;
}