#include<bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;

  int k;
  vector<int> ans(q);
  for(k=0;k<q;k++){
    string a,b;
    cin>>a>>b;

    vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,0));
    int i,j;
    for(i=0;i<a.size();i++){
      for(j=0;j<b.size();j++){
        if(a.at(i)==b.at(j))
        dp.at(i+1).at(j+1)=dp.at(i).at(j)+1;
        else{
          dp.at(i+1).at(j)=max(dp.at(i+1).at(j),dp.at(i).at(j));
          dp.at(i).at(j+1)=max(dp.at(i).at(j+1),dp.at(i).at(j));
          dp.at(i+1).at(j+1)=max(dp.at(i).at(j+1),dp.at(i+1).at(j));
        }
      }
    }

    ans.at(k)=dp.at(a.size()).at(b.size());
  }

  for(k=0;k<q;k++)
  cout<<ans.at(k)<<endl;

}
