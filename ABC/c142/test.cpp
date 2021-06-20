#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;
int main(){
  int n,m;cin>>n>>m;

  vector<pl> p;
  rep(i,m){
    int a,b;cin>>a>>b;
    int s=0;
    rep(j,b){
      int c;cin>>c;
      c--;
      s|=1<<c;
    }
    p.emplace_back(s,a);
  }

 vector<int> dp(1<<n,INF);
  dp[0]=0;
  rep(i,1<<n){
    rep(j,m){
      int s=i|p[j].first;
      dp[s]=min(dp[s],dp[i]+p[j].second);
    }
  }
  int ans=dp[(1<<n)-1];
  if(ans==INF) ans=-1;
  cout<<ans<<endl;

  // rep(i,m){
  //   cout<<"i "<<i<<" p "<<bitset<8>(p[i].first)<<endl;
  // }

  return 0;
}
