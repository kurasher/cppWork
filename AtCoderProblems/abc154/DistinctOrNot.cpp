#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    set<long> st;

    for(int i = 0; i < N; i++){
        long num;
        cin >> num;
        st.insert(num);
    }

    if(N == st.size()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}