#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n,k; cin>>n>>k;
  vector<int> x(n);
  rep(i,n) cin>>x[i];

  ll l=x[0];
  ll r=x[k-1];
  if(l>=0){
    cout<<r<<endl;
  }else{
    int i=0;
    ll ans=INF;
    while(l<0&&k-1+i<n){
      ans=min(ans,-l*2+r);
      i++;
      l=x[i];
      r=x[k-1+i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
