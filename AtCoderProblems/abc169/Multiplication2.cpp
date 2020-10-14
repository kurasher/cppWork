
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);  
  int cnt = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(A[i] == 0){
      ++cnt;
    }
  }
  
  long long res = 1'000'000'000'000'000'000;
  long long ans = 1;
  for(int i = 0; i < N; i++){
    if(A[i] == 0){
      break;
    }
    if(ans > res/A[i]){
      ans = -1;
      break;
    } 
    ans = ans*A[i];
  }
  if(cnt > 0){
    ans = 0;
  }
  cout << ans << endl;
}
