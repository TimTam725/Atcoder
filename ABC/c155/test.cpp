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
const ll INF=1000000007;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);ll c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int n,k;

bool solve(ll m,vector<ll>& a){
  ll c=0;
  rep(i,n){
    ll d=m/a[i];
    ll g;
    if(d>0){
      auto itr=lower_bound(a.begin(),a.end(),d);
      g=a.end()-itr;
      if(*itr>=i&&g>0) g--;
    }else{
      auto itr=upper_bound(a.begin(),a.end(),d);
      g=itr-a.begin();
      if(*itr<=i&&g>0) g--;
    }
    cout<<"g "<<g<<endl;
    c+=g;
  }
  cout<<c<<endl;
  if(c<=k) return 1;
  else return 0;
}

int main(){
  cin>>n>>k;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  sort(ALL(a));
  ll l=-1e18-7;
  ll r=1e18+7;
  while(r-l>1){
    ll m=(r+l)/2;
    cout<<m<<endl;
    if(solve(m,a)) l=m;
    else r=m;
  }
  cout<<l<<endl;

  return 0;
}
