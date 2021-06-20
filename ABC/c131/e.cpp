#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;


int main(){
  int n,k; cin>>n>>k;
  bool ans=0;
  if((n-1)*(n-2)/2<k)
  ans=1;

  vector<P> p;
  if(ans)
  cout<<-1<<endl;
  else{
    for(int i=1;i<n;i++){
      p.push_back({1,i+1});
    }
    // k=(n-1)*(n-2)/2-x
    vector<P> ad;
    for(int i=2;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        ad.push_back({i,j});
      }
    }
    rep(i,(n-1)*(n-2)/2-k){
      p.push_back(ad[i]);
    }
    cout<<p.size()<<endl;
    rep(i,p.size()){
      cout<<p[i].first<<" "<<p[i].second<<endl;
    }

  }

  return 0;
}
