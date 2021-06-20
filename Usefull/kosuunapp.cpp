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
const double PI=3.14159265358979;
const int INF=1000000007;
const ll LMAX=1000000000000000001;
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  int h,n; cin>>h>>n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i,n) cin>>a[i]>>b[i];
  vector<vector<int>> dp(n+1,vector<int>(h+1,INF));
  dp[0][0]=0;

  rep(i,n){
    int ch=INF;
    rep(j,h+1){
      if(j-a[i]<0){
        if(j+a[i]>=h&&j==h)
        dp[i+1][j]=min(dp[i][j],b[i]);
        else
        dp[i+1][j]=dp[i][j];
      }else{
        if(j!=h)
        dp[i+1][j]=min(dp[i][j],dp[i+1][j-a[i]]+b[i]);
        else
        dp[i+1][j]=min(dp[i][j],ch+b[i]);

        if(j+a[i]>=h)
        ch=min(ch,dp[i+1][j]);
      }
    }
  }
 /*rep(i,n+1){
    rep(j,h+1){
      if(dp[i][j]!=INF)
      cout<<dp[i][j]<<" ";
      else
      cout<<"I ";
    }
    cout<<endl;
  }*/

  cout<<dp[n][h]<<endl;

  return 0;
}
