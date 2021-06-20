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
const double PI=3.141592653589;
const int INF=1000000007;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);ll c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

//nCkを求める(n<∞ , k<300000)
const ll M=1000000007;
vector<ll> fac(300001); //n*(n-1)*…(n-k+1)(mod M)
vector<ll> ifac(300001); //k! (mod M)
//フェルマーの小定理 : X/Y=X*Y^-1 , Y^-1≡Y^(M-2) (mod M 素数)

//O(logn)でx^n(mod M)を求める
ll mpow(ll x,ll n){
  if(n==0) return 1;
  ll res=mpow(x*x%M,n/2);
  if(n&1) res=res*x%M; //nが奇数の場合
  return res;
}

ll comb(int n,int k){ //nCk(mod M)を計算
  if(n==0&&k==0)return 1;
  if(n<k||n<0)return 0;
  ll tmp=mpow(ifac[k],M-2)%M;//フェルマーの小定理 : (k!)^(M-2)
  return tmp*fac[k-1]%M;//n*(n-1)*…*(n-k+1)/k!
}

//O(k)で階乗の計算の準備
void set_comb(ll n){
  fac[0]=n;
  ifac[0]=1;
  for(ll i=0;i<300000;i++){
    if(n-i-1>0)
    fac[i+1]=fac[i]*(n-i-1)%M;//fac[i] : n*(n-1)*…*(n-i)
    ifac[i+1]=ifac[i]*(i+1)%M; // k! (mod M)
  }
}

int main(){
  int n,k; cin>>n>>k;
  set_comb(n);
  int mi=min(n,k);
  ll ans;
  rep(i,k+1){
    ll d=comb(n,i)*comb();
  }
  cout<<ans<<endl;
  return 0;
}
