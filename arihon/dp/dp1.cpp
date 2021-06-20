#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  vector<int> p(n+1,0);
  int i;
  int c=0;
  for(i=1;i<=n;i++){
    cin>>p.at(i);
    c+=p.at(i);
  }
  vector<vector<bool>> dp(n+1,vector<bool>(c+1,0));
  dp.at(0).at(0)=1;

  for(i=1;i<=n;i++){
    // cout<<"i "<<i<<endl;
    for(int j=0;j<=c;j++){
      if(j==0){
        dp.at(i).at(j)=1;
      }else if(j-p.at(i)>=0){
        dp.at(i).at(j)=dp.at(i-1).at(j)+dp.at(i-1).at(j-p.at(i));
      }else{
        dp.at(i).at(j)=dp.at(i-1).at(j);
      }
      // cout<<"dp("<<i<<").at("<<j<<") "<<dp.at(i).at(j)<<endl;
    }
  }
  // cout<<"syori"<<endl;
  int j;
  int cnt=0;
  for(j=0;j<=c;j++){
    // cout<<dp.at(n).at(j)<<" ";
    if(dp.at(n).at(j)){
      cnt++;
    }
  }
  cout<<cnt<<endl;

}
