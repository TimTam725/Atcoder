#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;
int main(){
  int n,w;
  cin>>n>>w;

  vector<pr> p(n+1);
  int i;
  for(i=1;i<=n;i++){
    int a,b;
    cin>>a>>b;
    p.at(i).first=a;
    p.at(i).second=b;
  }

  int j;
  int ma=0;
  vector<vector<int>> dp(n+1,vector<int>(w+1,0));
  for(i=1;i<=n;i++){
    for(j=0;j<=w;j++){
      if(j-p.at(i).second<0){
        dp.at(i).at(j)=dp.at(i-1).at(j);
      }else{
        int a,b;
        a=dp.at(i-1).at(j);
        b=dp.at(i-1).at(j-p.at(i).second)+p.at(i).first;
        dp.at(i).at(j)=max(a,b);
      }
    }
  }

  cout<<dp.at(n).at(w)<<endl;

}
