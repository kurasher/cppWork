#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

// void swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

vector<int> BucketSort(vector<int> list){
    vector<int> Bucket(1000);//とる値が0～999までなので、1000このバケツを用意

    for(int num : list){
        Bucket.at(num)++;
    }

    return Bucket;
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

    vector<int> bucketList(1000);
    bucketList = BucketSort(intList);
    sort(ansList.begin(), ansList.end());
    
    cout << endl;
    cout << "--BUCKET SORT--" << endl;
    for(int i = 0; i < bucketList.size(); i++){
        while(bucketList.at(i) > 0){
            cout << i << " ";
            bucketList.at(i)--;
        }
    }
    cout << endl;


    // int count = 0;
    cout << endl;
    cout << "--ANSWER--" << endl;
    for(int i = 0; i < ansList.size(); i++){
        cout << ansList.at(i) << " ";
    }
    cout << endl;
    // cout << count << endl;

}