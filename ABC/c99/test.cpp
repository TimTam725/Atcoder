#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const int INF=1000000001;
const double PI=3.141592653589;

int dp[100005];

int main(){
  int N; cin>>N;
  rep(i,N+1) dp[i]=INF;

  vector<int> w={1};
  int a=6;
  rep(i,7){
    w.pb(a);
    a*=6;
  }
  a=9;
  rep(i,6){
    w.pb(a);
    a*=9;
  }

  dp[0]=0;
  rep(i,N+1){
    rep(j,w.size()){
      if(i-w[j]<0) continue;
      dp[i]=min(dp[i],dp[i-w[j]]+1);
    }
  }
  // rep(i,N+1)
  // cout<<dp[i]<<" ";
  cout<<dp[N]<<endl;
  return 0;
}
