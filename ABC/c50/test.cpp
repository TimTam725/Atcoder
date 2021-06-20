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
  int n; cin>>n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  sort(ALL(a));
  int now=1;
  bool c=1;
  int g=0;
  if(n%2!=0){
    if(a[0]==0){
      now=2;
      g++;
    }else{
      cout<<0<<endl;
      return 0;
    }
  }
  for(int i=g;i<n;i++){
    if(c){
      if(a[i]==now)
      c=0;
      else{
        cout<<0<<endl;
        return 0;
      }
    }else{
      if(a[i]==now){
        c=1;
        now+=2;
      }else{
        cout<<0<<endl;
        return 0;
      }
    }
  }

  ll ans=1;
  rep(i,n/2){
    ans*=2;
    ans%=mod;
  }
  cout<<ans<<endl;


  return 0;
}
