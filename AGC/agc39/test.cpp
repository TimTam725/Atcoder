#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<ll,ll> P;
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
  int k; cin>>k;
  ll ans;
  bool f=1;
  if(s.size()==1)
  ans=k/2;
  else{
    rep(i,s.size()-1){
      if(s[i]==s[i+1]){
        ans++;
        i++;
      }
      if(i==s.size()-1)
      f=0;
    }
    ans*=k;
    if(f&&s[0]==s[s.size()-1]){
      ans+=k-1;
    }
  }
  cout<<ans<<endl;

  return 0;
}
