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
const ll LMAX=1000000000000001;

vector<ll> H,S;
int n;

bool check(ll m){
  vector<ll> c;
  rep(i,n){
    if(m-H[i]<0) return 0;
    c.pb((m-H[i])/S[i]);
  }
  sort(ALL(c));
  rep(i,n){
    if(c[i]<i) return 0;
  }
  return 1;
}

int main(){
  cin>>n;
  rep(i,n){
    ll h,s; cin>>h>>s;
    H.pb(h);S.pb(s);
  }

  ll l=1;
  ll r=LMAX;

  while(r-l>1){
    ll mid=(r+l)/2;
    if(check(mid)) r=mid;
    else l=mid;
  }

  cout<<r<<endl;

  return 0;
}
