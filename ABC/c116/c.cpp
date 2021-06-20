#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int main(){
  int n; cin>>n;
  vector<int> h(n);
  rep(i,n) cin>>h[i];

  int ans=0;
  while(1){
    int y=0;
    bool c=0;
    int yy=0;
    rep(i,n){
      if(!(c)&&h[i]>0){
        y++;
        c=1;
      }
      if(c&&h[i]<=0){
        c=0;
      }
      if(h[i]<=0)
      yy++;
      h[i]--;
    }
    // cout<<y<<endl;
    ans+=y;
    if(yy==n)
    break;
  }
  cout<<ans<<endl;

  return 0;
}
