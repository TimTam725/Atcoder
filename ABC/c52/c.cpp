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
vector<ll> a(1001,1);

void soinsu(ll n){
  for(ll i=2;i*i<=n;i++){
    if(n%i)continue;
    while(n%i==0){
      n/=i;
      a[i]++;
    }
  }
  if(n!=1)a[n]++;
}

int main(){
  int n; cin>>n;
  ll ans=1;
  // rep(i,n){
  //   soinsu(i+1);
  // }
  for(int i=1;i<n;i++)
  soinsu(i+1);
  // cout<<a[i]<<endl;

  rep(i,a.size()){
    ans*=a[i];
    ans%=mod;
    // if(i<=30)
    // cout<<i<<" "<<a[i]<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
