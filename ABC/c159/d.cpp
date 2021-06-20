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

int main(){
  int n; cin>>n;
  vector<ll> a(n,0);
  vector<ll> c(n,0);

  rep(i,n){
    int A; cin>>A;
    A--;a[A]++;
    c[i]=A;
  }
  ll ans=0;
  rep(i,n){
    if(a[i]<=1) continue;
    ans+=a[i]*(a[i]-1)/2;
  }
  // cout<<ans<<endl;
  rep(i,n){
    if(a[c[i]]<=1) cout<<ans<<endl;
    else{
      ll k=ans-a[c[i]]*(a[c[i]]-1)/2;
      if(a[c[i]]-2>0) k+=(a[c[i]]-1)*(a[c[i]]-2)/2;
      cout<<k<<endl;
    }
  }

  return 0;
}
