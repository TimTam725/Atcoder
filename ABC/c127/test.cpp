#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n,m; cin>>n>>m;
  vector<int> a(n);
  ll ans=0;
  rep(i,n){
    cin>>a[i];
    ans+=a[i];
  }
  vector<P> p(m);
  rep(i,m) cin>>p[i].second>>p[i].first;

  sort(a.begin(),a.end());
  sort(p.begin(),p.end(),greater<P>());
  // rep(i,m){
  //   cout<<p[i].second<<" "<<p[i].first<<endl;
  // }
  int id=0;
  for(int i=0;i<n;i++){
    if(i+p[id].second>=n){
      for(int j=i;j<n;j++){
        if(a[j]<p[id].first){
          ans=ans-a[j]+p[id].first;
        }
      }
    }else{
      for(int j=i;j<i+p[id].second;j++){
        if(a[j]<p[id].first){
          ans=ans-a[j]+p[id].first;
        }
      }
    }
    i+=p[id].second-1;
    id++;
    if(id>=m)
    break;
  }

  cout<<ans<<endl;

  return 0;
}
