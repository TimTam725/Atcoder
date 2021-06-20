#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

vector<P> a(25);

int main(){
  int n; cin>>n;
  rep(i,n){
    cin>>a[i].first;
  }
  rep(i,n){
    cin>>a[i].second;
  }
  int ans=-1;
  for(int bit=0;bit<(1<<n);bit++){
    int x=0;
    int y=0;
    // cout<<bitset<8>(bit)<<endl;
    rep(i,n){
      if((bit&(1<<i))!=0){
        x+=a[i].first;
        y+=a[i].second;
      }
    }
    // cout<<x<<" "<<y<<endl;
    ans=max(ans,x-y);
  }
  cout<<ans<<endl;
}
