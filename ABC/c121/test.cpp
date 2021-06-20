#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<ll,ll> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  ll n,m; cin>>n>>m;
  vector<P> p(n);
  rep(i,n) cin>>p[i].first>>p[i].second;

  sort(p.begin(),p.end());
  ll ans=0;
  ll nm=0;
  rep(i,n){
    if(m-nm<p[i].second){
      ans+=(p[i].first)*(m-nm);
      break;
    }else{
      ans+=(p[i].first)*(p[i].second);
      nm+=p[i].second;
    }
  }

  cout<<ans<<endl;
  return 0;
}
