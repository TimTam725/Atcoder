#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

double shi(int i,int k){
  int ans=i;
  double j=1;
  while(ans<k){
    ans*=2;
    j*=(1.0/2.0);
  }
  return j;
}

int main(){
  int n,k; cin>>n>>k;
  double ans=0;
  double c=1/(double)(n);
  rep(i,n){
    ans+=c*shi(i+1,k);
    // cout<<shi(i+1,k)<<endl;
  }
  cout<<fixed<<setprecision(9)<<ans<<endl;

  return 0;
}
