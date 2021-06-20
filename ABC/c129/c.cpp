#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=1000000007;


int main(){
  int n,m; cin>>n>>m;
  vector<ll> dp(n+1,0);
  rep(i,m){
    int a; cin>>a;
    dp[a]=-1;
  }
  dp[0]=1;
  for(int i=1;i<=n;i++){
    if(dp[i]<0) continue;
    if(0<=i-1&&0<=dp[i-1])
    dp[i]+=dp[i-1];
    if(0<=i-2&&0<=dp[i-2])
    dp[i]+=dp[i-2];
    dp[i]%=INF;
  }
  cout<<dp[n]<<endl;
  // rep(i,n+1){
  //   cout<<dp[i]<<(i==n?"\n":" ");
  // }

}
