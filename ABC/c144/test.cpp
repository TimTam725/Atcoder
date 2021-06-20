#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  ll n;cin>>n;

  ll ans=INF;
  int nn=sqrt(n);
  // cout<<nn<<endl;
  for(int i=1;i<=nn;i++){
    if(n%i==0){
      ll a=(n/i-1)+(i-1);
      ans=min(ans,a);
    }
  }
  cout<<ans<<endl;

  return 0;
}
