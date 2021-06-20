#include<bits/stdc++.h>
using namespace std;

int main(){
  int INF=-10000;

  int d;
  int i,j,k;
  cin>>d;
  vector<int> ans(d);
  for(k=0;k<d;k++){
    string a,b;
    cin>>a>>b;

    vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,0));
    dp.at(0).at(0)=0;
    for(i=0;i<a.size();i++){
      // cout<<"i "<<i<<endl;
      for(j=0;j<b.size();j++){
        // cout<<"j "<<j<<endl;
        if(a.at(i)==b.at(j)){
          dp.at(i+1).at(j+1)=dp.at(i).at(j)+1;
        } else{
          dp.at(i+1).at(j+1)=max(dp.at(i).at(j+1),dp.at(i+1).at(j));
        }
      }
    }

    ans.at(k)=dp.at(a.size()).at(b.size());
}

for(k=0;k<d;k++)
cout<<ans.at(k)<<endl;

}
