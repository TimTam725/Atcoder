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
  int n,m; cin>>n>>m;
  if(n>=m){
    cout<<0<<endl;
  }else{
    vector<int> x(m);
    rep(i,m) cin>>x[i];
    sort(x.begin(),x.end());
    vector<int> l(m-1);
    int ans=0;
    rep(i,m-1){
      l[i]=x[i+1]-x[i];
      ans+=l[i];
    }
    sort(l.begin(),l.end());
    rep(i,n-1){
      ans-=l[m-2-i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
