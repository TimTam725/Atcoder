#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n; cin>>n;
  vector<ll> dp(n,0);
  vector<int> a(n);
  rep(i,n){
    cin>>a[i];
    dp[0]+=a[i];
  }
  for(int i=1;i<n-1;i+=2){
    dp[0]-=2*a[i];
  }
  rep(i,n-1){
    dp[i+1]=2*a[i]-dp[i];
  }
  rep(i,n){
    cout<<dp[i]<<(i==n-1?"\n":" ");
  }
  return 0;
}
