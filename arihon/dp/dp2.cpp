#include<bits/stdc++.h>
using namespace std;

int main(){
  int w;
  cin>>w;

  int n,k;
  cin>>n>>k;

  vector<pair<int,int>> p(n+1);
  int i;
  for(i=1;i<=n;i++){
    int a,b;
    cin>>a>>b;
    p.at(i).first=a;
    p.at(i).second=b;
  }

  int j;
  vector<vector<int>> dp(n+1,vector<int>(w+1,0));
  vector<vector<int>> c(n+1,vector<int>(w+1,0));
  for(i=0;i<n;i++){
    for(j=0;j<=w;j++){
      if(j+p.at(i+1).first>w)
      break;
      else if(c.at(i+1).at(j)+1>k){
        dp.at(i+1).at(j)=dp.at(i).at(j);
      }else{
        c.at(i+1).at(j)++;
        int a,b;
        a=dp.at(i).at(j)+p.at(i+1).second;
        b=dp.at(i+1).at(j+p.at(i+1).first);
        dp.at(i+1).at(j+p.at(i+1).first)=max(a,b);
      }
      cout<<i+1<<"番目までで幅は"<<j<<"であるときのコストは"<<dp.at(i+1).at(j)<<" 貼り付け"<<c.at(i+1).at(j)<<endl;
    }
  }

  for(i=0;i<=n;i++){
    for(j=0;j<w;j++){
      cout<<dp.at(i).at(j)<<" ";
    }
    cout<<dp.at(i).at(w)<<endl;
  }
  cout<<"ok"<<endl;
}
