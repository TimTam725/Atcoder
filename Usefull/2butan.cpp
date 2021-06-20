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
const ll LMAX=1000000000000000001;

ll number(ll mid,vector<ll>& a,vector<ll>& b){
  ll num=0;
  rep(i,a.size()){
    ll M=mid/a[i];
    if(mid%a[i]==0)
    num+=(ll)(lower_bound(ALL(b),M)-b.begin());
    else
    num+=(ll)(upper_bound(ALL(b),M)-b.begin());
  }
  return num;
}

int main(){
  ll n,k; cin>>n>>k;
  vector<ll> a(n);
  vector<ll> b(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  sort(ALL(b));

  ll l=0;
  ll r=LMAX;
  int c=0;
  while(r-l>1){
    ll mid=(r+l)/2;
    ll num=number(mid,a,b);
    // cout<<num<<endl<<" l "<<l<<" r "<<r<<" mid "<<mid<<endl;
    if(num>=k) r=mid;
    else l=mid;
    // c++;
    // if(c==100) break;
  }
  cout<<l<<endl;

  return 0;
}
