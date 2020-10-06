#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ac = a*c;
    long long ad = a*d;
    long long bc = b*c;
    long long bd = b*d;

    if(ad < ac && bc < ac && bd < ac){
        cout << ac << endl; 
    }else if(ac < ad && bc < ad && bd < ad){
        cout << ad << endl;
    }else if(ac < bc && ad < bc && bd < bc){
        cout << bc << endl;
    }else {
        cout << bd << endl;
    }
}