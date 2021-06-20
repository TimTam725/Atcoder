#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=1000000007;

ll dp[100005][2];
const ll mod=1000000007;

int main(){
  string s; cin>>s;
  // a+b=XOR(a,b)⇔a+b=XOR(a,b)+AND(a,b) (AND(a,b)==0)
  dp[0][0]=1;
  rep(i,s.size()){
    //a+b==0
    if(s[i]=='0'){
      dp[i+1][0]=dp[i][0];
      dp[i+1][1]=dp[i][1];
    }else{
      dp[i+1][1]=(dp[i][0]+dp[i][1])%mod;
    }
    //a+b==1
    if(s[i]=='0'){
      dp[i+1][1]+=dp[i][1]*2;
      dp[i+1][1]%=mod;
    }else{
      dp[i+1][0]+=dp[i][0]*2%mod;
      dp[i+1][1]+=dp[i][1]*2%mod;
    }
  }

  ll ans=(dp[s.size()][0]+dp[s.size()][1])%mod;
  cout<<ans<<endl;

}
