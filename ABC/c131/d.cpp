#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<ll,ll> P;
const int INF=100100100;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<P> p(n);
  rep(i,n){
    ll a,b; cin>>a>>b;
    p[i]={b,a};
  }
  sort(p.begin(),p.end());

  ll sa=0;
  ll sb=0;
  bool ans=1;
  rep(i,n){
    sa+=p[i].second;
    sb=p[i].first;
    if(sa>sb){
      ans=0;
      break;
    }
  }
  cout<<(ans?"Yes":"No")<<endl;

  return 0;
}
