#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;

vector<ll> soinsu(ll n){
  vector<ll> a;
  for(ll i=2;i*i<=n;i++){
    if(n%i)continue;
    while(n%i==0){
      n/=i;
      a.push_back(i);
    }
  }
  if(n!=1)a.push_back(n);
  return a;
}

int main(){
  ll n,b;cin>>n;
  auto f=soinsu(n);
  b=1;

  ll ans=INF;
  for(ll i=0;i<f.size();i++){
    // cout<<f[i]<<endl;
     // cout<<"b "<<b<<" n "<<n<<endl;
    ll a=(b-1)+(n-1);
    ans=min(ans,a);
    b*=f[i]; n/=f[i];
  }

  cout<<ans<<endl;

  return 0;
}
