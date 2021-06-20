#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int dp[30005][3];

int main(){
  int n; cin>>n;
  string s; cin>>s;

  int ans=0;
  rep(i,1000){
    string t;
    int x=i;
    int h=100;
    rep(j,3){
      t+=x/h+'0';
      x%=h;
      h/=10;
    }
    int ti=0;
    rep(j,s.size()){
      if(s[j]==t[ti])
      ti++;
      if(ti==3){
        ans++;
        break;
      }
    }
  }
  cout<<ans<<endl;

  return 0;
}
