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


int main(){
  int n; cin>>n;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  ll lc=a[0];

  ll ans=0;
  rep(i,n){
    lc=lcm(lc,a[i]);
    lc%=INF;
  }
  // cout<<lc<<endl;
  rep(i,n){
    ans+=(lc/a[i]);
  }
  cout<<ans%INF<<endl;

  return 0;
}
