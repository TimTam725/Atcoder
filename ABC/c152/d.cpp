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
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};


P aketa(int k,int K){
  while(k>9){
    k/=10;
    K++;
  }
  P c={k,K};
  return c;
}
int bketa(int k,int K){
  return k%(10*K);
}

int main(){
  int n; cin>>n;

  vector<ll> p(5,0);
  p[0]=0;
  for(int i=1;i<6;i++){
    p[i]=p[i]*10+p[i-1];
  }
  P na=aketa(n,1);
  int nk=na.sc-2;
  ll ans=0;
  if(n<10){
    ans=n;
  }else{
    ans+=9;
    int K=1;
    for(int i=11;i<=n;i++){
      cout<<i<<endl;
      P a=aketa(i,K);
      int b=bketa(i,K);
      int c=b*10+a.fs;
      K=1;
      if(c>n||b==0) continue;
      ans++;
      rep(j,nk+1) b*=10;
      b+=a.fs;
      if(n-b<0){
        if(nk-3>0) ans+=p[nk-3];
      }else{
        if(na.fs==a.fs){
          if(nk-3>0){
            ans+=p[nk-3];
          }
          ans+=n-b+1;
        }else{
          if(nk-2>0)
          ans+=p[nk-2];
        }
      }
      // cout<<a.fs<<" "<<b<<endl;
    }
  }
  cout<<ans<<endl;


  return 0;
}
