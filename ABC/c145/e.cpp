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
    cin>>p[i].second>>p[i].first;
  }
  sort(p.begin(),p.end(),greater<P>());
  // rep(i,n)
  // cout<<p[i].second<<" "<<p[i].first<<endl;
  rep(i,n+1){
    rep(j,t+1){
      dp[0][i]==0;
    }
  }
  for(int i=1;i<n;i++){
    rep(j,t+1){
      if(j-p[i].second<0) continue;
      dp[i+1][j]=max(dp[i][j],dp[i][j-p[i].second]+p[i].first);
    }
  }
  ll m1=-1;
  rep(i,t){
    if(i-p[i].second<0)
    dp[n][i]+=p[n-1].second;
    m1=max(m1,dp[n][i]);
  }
  // ll ans=max(m1+p[0].first,dp[n][t]);
  cout<<m1<<endl;
  // rep(i,n+1){
  //   rep(j,t+1){
  //     cout<<dp[i][j]<<(j==t?"\n":" ");
  //   }
  // }

  return 0;
}
