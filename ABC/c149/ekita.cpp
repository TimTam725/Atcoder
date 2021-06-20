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
const ll LMAX=10000000001;

ll number(ll mid,vector<ll>& a){
  ll num=0;
  rep(i,a.size()){
    ll M=mid-a[i];
    num+=(ll)(a.end()-lower_bound(ALL(a),M));
  }
  return num;
}

int main(){
  ll n,m; cin>>n>>m;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  sort(ALL(a));

  ll l=0;
  ll r=LMAX;
  while(r-l>1){
    ll mid=(r+l)/2;
    ll num=number(mid,a);
    // cout<<num<<endl<<" l "<<l<<" r "<<r<<" mid "<<mid<<endl;
    if(num<m) r=mid;
    else l=mid;
  }
  // cout<<l<<endl;
  vector<ll> b(n);
  rep(i,n){
    if(i==0) b[i]=a[i];
    else b[i]=a[i]+b[i-1];
  }
  ll sum=0;
  ll c=0;
  rep(i,n){
    auto itr=upper_bound(ALL(a),l-a[i]);
    int id=a.end()-itr;
    // cout<<"id "<<id<<endl;
    c+=id;
    if(id==n)
    sum+=a[i]*id+b[n-1];
    else{
      sum+=a[i]*id+(b[n-1]-b[n-1-id]);
    }
    // cout<<sum<<endl;
  }
  c=m-c;
  sum+=c*l;
  cout<<sum<<endl;

  return 0;
}
