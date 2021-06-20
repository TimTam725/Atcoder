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
  vector<ll> x(n);
  rep(i,n) cin>>x[i];
  ll ans=LMAX;
  for(int i=1;i<101;i++){
    ll sum=0;
    rep(j,n){
      sum+=(x[j]-i)*(x[j]-i);
    }
    ans=min(ans,sum);
  }
  cout<<ans<<endl;

  return 0;
}
