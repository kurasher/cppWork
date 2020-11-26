#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  for(int i=1;i<=1009;i++){
    int x=i*8/100;
    int y=i/10;
    if(a==x && b==y){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}