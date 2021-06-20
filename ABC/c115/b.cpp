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
  vector<int> p(n);
  rep(i,n){
    cin>>p[i];
  }
  sort(p.begin(),p.end());
  int ans=0;
  rep(i,n-1){
    ans+=p[i];
  }
  ans+=p[n-1]/2;
  cout<<ans<<endl;

  return 0;
}
