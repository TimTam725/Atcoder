#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin>>N>>W;

  vector<pair<int,int>> a(N);
  int i,j;
  for(i=0;i<N;i++){
    int v,w;
    cin>>v>>w;
    a.at(i).first=v;
    a.at(i).second=w;
  }
  vector<vector<long long>> dp(N+1,vector<long long>(W+1,0));
  for(i=0;i<N;i++){
    for(j=0;j<=W;j++){
      if(j-a.at(i).second<0){
        dp.at(i+1).at(j)=dp.at(i).at(j);
      }else{
        dp.at(i+1).at(j)=max(dp.at(i).at(j),dp.at(i+1).at(j-a.at(i).second)+a.at(i).first);
      }
    }
  }
  // for(i=0;i<=N;i++){
  //   for(j=0;j<W;j++){
  //     cout<<dp.at(i).at(j)<<" ";
  //   }
  //   cout<<dp.at(i).at(W)<<endl;
  // }
  cout<<dp.at(N).at(W)<<endl;

}
