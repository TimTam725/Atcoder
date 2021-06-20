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
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};



int main(){
  ll n,k; cin>>n>>k;
  map<ll,ll> mp;
  rep(i,n){
    ll a,b; cin>>a>>b;
    mp[a]+=b;
  }
  ll pre=0;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    pre+=itr->sc;
    if(pre>=k){
      cout<<itr->fs<<endl;
      break;
    }
  }


  return 0;
}
