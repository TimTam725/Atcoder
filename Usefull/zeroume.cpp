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
  vector<int> p(m);
  vector<int> y(m);
  vector<vector<int>> j(n);

  rep(i,m){
    cin>>p[i]>>y[i];
    j[p[i]-1].push_back(y[i]);
  }
  rep(i,n){
    sort(j[i].begin(),j[i].end());
  }
  rep(i,m){
    ll ans=(ll)p[i]*1000000;
    auto itr=lower_bound(j[p[i]-1].begin(),j[p[i]-1].end(),y[i]);
    ans+=(int)((itr-j[p[i]-1].begin())+1);
    printf("%012lld\n",ans);
  }


  return 0;
}
