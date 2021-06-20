#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;

  int i,j,k;
  vector<vector<vector<long long>>> dp(100+1,vector<vector<long long>>(100+1,vector<long long>(100+1,0)));
  for(i=0;i<n;i++){
    int a,b,c;
    long long w;
    cin>>a>>b>>c>>w;
    dp.at(a).at(b).at(c)=max(dp.at(a).at(b).at(c),w);
  }
  for(i=0;i<=100;i++){
    for(j=0;j<=100;j++){
      for(k=0;k<=100;k++){
        if(i>0)
        dp.at(i).at(j).at(k)=max(dp.at(i).at(j).at(k),dp.at(i-1).at(j).at(k));
        if(j>0)
        dp.at(i).at(j).at(k)=max(dp.at(i).at(j).at(k),dp.at(i).at(j-1).at(k));
        if(k>0)
        dp.at(i).at(j).at(k)=max(dp.at(i).at(j).at(k),dp.at(i).at(j).at(k-1));
      }
    }
  }
  vector<long long> ans(m);
  for(i=0;i<m;i++){
    int x,y,z;
    cin>>x>>y>>z;
    ans.at(i)=dp.at(x).at(y).at(z);
  }
  for(i=0;i<m;i++)
  cout<<ans.at(i)<<endl;

}
