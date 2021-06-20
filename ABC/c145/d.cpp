#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;
const ll M=1000000007;

vector<ll> fac(2000001); //n!(mod main)
vector<ll> ifac(2000001); //k!^{M-2} (mod M)
//a,bの範囲的にこれだけ配列を用意していけば十分

ll mpow(ll x,ll n){ //x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
  ll ans=1;
  while(n!=0){
    if(n&1) ans=ans*x%M;
    x=x*x%M;
    n=n>>1;
  }
  return ans;
}

ll comb(ll a, ll b){ //aCbをmod計算
  if(a==0&&b==0)return 1;
  if(a<b||a <0)return 0;
  ll tmp=ifac[a-b]*ifac[b]%M;
  return tmp*fac[a]%M;
}

void set_comb(){
  fac[0]=1;
  ifac[0]=1;
  for(ll i=0;i<2000001;i++){
    fac[i+1]=fac[i]*(i+1)%M; // n!(mod M)
    ifac[i+1]=ifac[i]*mpow(i+1,M-2)%M; // k!^{M-2} (mod M) ←累乗にmpowを採用
  }
}


int main(){
  int X,Y; cin>>X>>Y;
  ll x=(2*X-Y)/3;
  ll y=(2*Y-X)/3;
  // cout<<x<<" "<<y<<endl;
  ll ans=1;
  if(x<0||y<0||(2*X-Y)%3!=0||(2*Y-X)%3!=0){
    ans=0;
    // cout<<"ko"<<endl;
  }
  else{
    set_comb();
    ans=comb(x+y,y);
  }
  cout<<ans<<endl;

  return 0;
}
