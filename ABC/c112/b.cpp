#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const int INF=10000001;
const double PI=3.141592653589;


int main(){
  int n,t; cin>>n>>t;
  vector<P> p(n);
  rep(i,n){
    cin>>p[i].first>>p[i].second;
  }
  sort(p.begin(),p.end());
  int ans=INF;
  rep(i,n){
    if(p[i].second<=t&&ans>p[i].first)
    ans=p[i].first;
  }
  if(ans==INF)
  cout<<"TLE"<<endl;
  else
  cout<<ans<<endl;

  return 0;
}
