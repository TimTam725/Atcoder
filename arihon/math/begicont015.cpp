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
  vector<vector<bool>> cli(n+1,vector<bool>(w+1,1));
  for(i=1;i<=n;i++){
    for(j=0;j<=w;j++){
      if(c.at(i-1).at(j)+1>k){
        dp.at(i).at(j)=dp.at(i-1).at(j);
      }else if(j-p.at(i).first>=0&&cli.at(i).at(j-p.at(i).first)&&(dp.at(i).at(j-p.at(i).first)>0||j==p.at(i).first)){
        cout<<"i "<<i<<" j "<<j<<endl;
        c.at(i).at(j)=c.at(i-1).at(j)+1;
        dp.at(i).at(j)=dp.at(i).at(j-p.at(i).first)+p.at(i).second;
        cli.at(i).at(j)=0;
      }
      cout<<i<<"番目までで幅は"<<j<<"であるときのコストは"<<dp.at(i).at(j)<<" 貼り付け"<<c.at(i).at(j)<<endl;
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
