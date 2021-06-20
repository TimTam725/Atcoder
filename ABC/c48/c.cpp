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
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  ll n,x; cin>>n>>x;
  vector<ll> a(n);
  ll ans=0;
  rep(i,n) cin>>a[i];
  rep(i,n-1){
    ll k=a[i]+a[i+1];
    if(k>x){
      ans+=k-x;
      if(a[i+1]<k-x)
      a[i+1]=0;
      else
      a[i+1]-=k-x;
    }
  }
  cout<<ans<<endl;
  return 0;
}
