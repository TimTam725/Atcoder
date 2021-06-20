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

ll gcd(ll a,ll b){
  if(a<b)swap(a,b);
  ll c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

int main(){
  int n; cin>>n;
  ll ans;
  rep(i,n){
    ll t; cin>>t;
    if(i==0)
    ans=t;
    else{
      ll c=gcd(ans,t);
      ans=(ans/c)*(t/c)*c;
    }
  }
  cout<<ans<<endl;

  return 0;
}
