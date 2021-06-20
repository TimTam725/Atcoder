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

int keta(ll n){
  int k=1;
  while(n/10>0){
    n/=10; k++;
  }
  return k;
}

int main(){
  ll n; cin>>n;
  int ans=INF;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      int d=keta(n/i);
      ans=min(d,ans);
    }
  }
  cout<<ans<<endl;

  return 0;
}
