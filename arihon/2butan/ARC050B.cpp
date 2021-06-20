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
const ll LMAX=1000000000000000001;
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

ll r,b,x,y;
bool solv(ll m){
  if(r-m<0||b-m<0) return 0;
  if((r-m)/(x-1)+(b-m)/(y-1)>=m) return 1;
  else return 0;
}

int main(){
  cin>>r>>b>>x>>y;
  ll l=-1;
  ll r=LMAX;
  while(r-l>1){
    ll mid=(r+l)/2;
    if(solv(mid)) l=mid;
    else r=mid;
  }
  cout<<l<<endl;

  return 0;
}
