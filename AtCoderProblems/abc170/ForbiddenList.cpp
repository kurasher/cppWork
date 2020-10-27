#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, N;
    cin >> X >> N;
    set<int> p;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        p.insert(num);
    }

    int sub = 0;
    int ans = 0;
    while(true){
        if(p.count(abs(X-sub)) == 1 && p.count(X+sub) == 1){
            sub++;
        }else if(p.count(abs(X-sub)) == 1){
            ans = X+sub;
            break;
        }else if(p.count(X+sub) == 1){
            ans = X - sub;
            break;
        }else{
            ans = min(X-sub, X+sub);
            break;
        }
    }

    cout << ans << endl;

}