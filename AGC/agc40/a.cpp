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
const ll mod=1000000007;

int main(){
  string s; cin>>s;
  bool f=0;
  vector<ll> d;
  if(s[0]=='<')
  f=1;
  else
  d.pb(0);

  int c=0;
  rep(i,s.size()){
    if(f){
      if(s[i]=='<')
      c++;
      else{
        d.pb(c);
        f=0;c=1;
      }
    }else{
      if(s[i]=='>')
      c++;
      else{
        d.pb(c);
        f=1;c=1;
      }
    }
  }
  d.pb(c);
  if(d.size()%2!=0)
  d.pb(0);
  // rep(i,d.size())
  // cout<<d[i]<<" ";
  ll ans=0;
  for(int i=0;i<d.size();i+=2){
    if(d[i]<d[i+1]){
      ans+=d[i+1]*(d[i+1]+1)/2+d[i]*(d[i]+1)/2-d[i];
    }else{
      ans+=d[i+1]*(d[i+1]+1)/2+d[i]*(d[i]+1)/2-d[i+1];
    }
  }
  cout<<ans<<endl;

  return 0;
}
