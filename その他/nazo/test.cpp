#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;

  int i;
  vector<int> A(N);
  vector<int> dp(N,0);
  for(i=0;i<N;i++){
    cin>>A.at(i);
    dp.at(0)+=A.at(i);
  }

  for(i=1;i<=N-1;i+=2){
    dp.at(0)-=2*A.at(i);
  }
  for(i=0;i<N-1;i++){
    dp.at(i+1)=2*A.at(i)-dp.at(i);
  }
  for(i=0;i<N-1;i++)
  cout<<dp.at(i)<<" ";
  cout<<dp.at(N-1)<<endl;

}
