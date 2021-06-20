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
  int n,k; cin>>n>>k;
  vector<int> h(n);
  rep(i,n) cin>>h[i];

  sort(h.begin(),h.end());
  int l=0;
  int ans=1000000009;
  for(int r=k-1;r<n;r++){
    ans=min(ans,h[r]-h[l]);
    l++;
  }
  cout<<ans<<endl;
  return 0;
}
