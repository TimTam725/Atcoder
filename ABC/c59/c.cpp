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
  int n; cin>>n;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];


  ll ans=LMAX;
  rep(j,2){
    ll sum=0;
    ll c=0;
    bool F;
    if(j==0) F=1;
    else F=0;
    rep(i,n){
      if(F){
        if(sum+a[i]<0) sum+=a[i];
        else{
          c+=abs(sum+a[i])+1;
          sum=-1;
        }
        F=0;
      }else{
        if(sum+a[i]>0) sum+=a[i];
        else{
          c+=abs(sum+a[i])+1;
          sum=1;
        }
        F=1;
      }
    }
    ans=min(ans,c);
  }

  cout<<ans<<endl;

  return 0;
}
