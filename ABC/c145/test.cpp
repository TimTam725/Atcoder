#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<ll,ll> P;
const int INF=10010010;
const double PI=3.141592653589;
const ll mod=1000000007;
vector<vector<ll>> dp(3001,vector<ll>(3001));

int main(){
  int n,t; cin>>n>>t;
  vector<P> p(n);
  rep(i,n){
    cin>>p[i].first>>p[i].second;
  }
  sort(p.begin(),p.end());
  // rep(i,n)
  // cout<<p[i].second<<" "<<p[i].first<<endl;
  rep(i,n+1){
    rep(j,t+1){
      dp[0][i]==0;
    }
  }
  for(int i=0;i<n;i++){
    rep(j,t+1){
      if(j-p[i].first<0&&i!=n-1) continue;
      if(i!=n-1)
      dp[i+1][j]=max(dp[i][j],dp[i][j-p[i].first]+p[i].second);
      else
      
    }
  }
  ll m1=-1;
  rep(i,t){
     m1=max(m1,dp[n-1][i]+p[n-1].second);
  }
  ll ans=max(m1,dp[n-1][t]);
  cout<<ans<<endl;
  // rep(i,n+1){
  //   rep(j,t+1){
  //     cout<<dp[i][j]<<(j==t?"\n":" ")
  //   }
  // }

  return 0;
}
