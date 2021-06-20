#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=100100100;
const double PI=3.141592653589;

ll gcd(ll a,ll b){
  if(a<b) swap(a,b);
  ll c=a%b;
  if(c==0)
  return b;
  else
  return gcd(b,c);
}

int main(){
  ll a,b,c,d; cin>>a>>b>>c>>d;
  ll ans=0;
  ll f=gcd(c,d);
  f=f*(c/f)*(d/f);
  ans=(b-a+1)-(b/c-a/c)-(b/d-a/d)+(b/f-a/f);

  // cout<<f<<endl;
  if(a%c==0)
  ans-=1;
  if(a%d==0)
  ans-=1;
  if(a%f==0)
  ans+=1;
  // cout<<(b-a+1)<<" "<<b/c-a/c<<" "<<b/d-a/d<<" "<<b/(c*d)-a/(c*d)<<endl;
  cout<<ans<<endl;

  return 0;
}
