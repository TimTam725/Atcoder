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
  int n;cin>>n;
  vector<int> d(n);
  rep(i,n){
    cin>>d[i];
  }
  ll ans=0;
  for(int i;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      ans+=(d[i]*d[j]);
      // cout<<ans<<endl;
    }
  }

  cout<<ans<<endl;
  return 0;
}
