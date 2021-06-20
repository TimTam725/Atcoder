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
const ll mod=1000000007;

ll kai(ll a){
  if(a==1) return 1;
  else{
    return a*kai(a-1)%mod;
  }
}
ll kai2(ll a){
  int c=1;
  for(int i=1;i<=a;i++){
    c*=i;
    c%=mod;
  }
  return c;
}

int main(){
  int n,m; cin>>n>>m;
  if(abs(n-m)>1)
  cout<<0<<endl;
  else{
    ll ans=1;
    if(n<m) swap(n,m);
    if(n==m) ans*=2;
    for(int i=1;i<=n;i++){
      ans*=i;
      ans%=mod;
    }
    for(int i=1;i<=m;i++){
      ans*=i;
      ans%=mod;
    }
    cout<<ans<<endl;
  }
  return 0;
}
