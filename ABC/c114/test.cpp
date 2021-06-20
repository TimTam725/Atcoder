#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int ans=0;

void dfs(ll x,bool a,bool b,bool c,ll n){
  if(a&&b&&c){
    ans++;
  }
  if(x*10+3<=n)
  dfs(x*10+3,1,b,c,n);
  if(x*10+5<=n)
  dfs(x*10+5,a,1,c,n);
  if(x*10+7<=n)
  dfs(x*10+7,a,b,1,n);
}

int main(){
  ll n; cin>>n;
  dfs(0,0,0,0,n);
  cout<<ans<<endl;

  return 0;
}
