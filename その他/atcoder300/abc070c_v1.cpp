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

map<ll,ll> mpp;

void soinsu(ll n){
  map<ll,ll> m;
  for(ll i=2;i*i<=n;i++){
    if(n%i)continue;
    m[i]++;
    while(n%i==0){
      n/=i;
      m[i]++;
    }
  }
  if(n!=1)m[n]++;
  for(auto itr=m.begin();itr!=m.end();itr++){
    ll a=itr->fs;
    ll b=itr->sc;
    mpp[a]=max(mpp[a],b);
  }
}

ll rui(ll a,ll b){
  ll k=1;
  rep(i,b-1) k*=a;
  return k;
}

int main(){
  int n; cin>>n;
  ll k=1;
  rep(i,n){
    ll t; cin>>t;
    soinsu(t);
  }
  ll ans=1;
  for(auto itr=mpp.begin();itr!=mpp.end();itr++){
    ll d=rui(itr->fs,itr->sc);
    ans*=d;
     cout<<itr->fs<<" "<<itr->sc<<" "<<d<<" "<<ans<<endl;
  }

  cout<<ans<<endl;

  return 0;
}
