#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=100100100;
const double PI=3.141592653589;


int main(){
  int n,l; cin>>n>>l;
  int ans=0;
  int mi=INF;
  for(int i=1;i<=n;i++){
    int c=i+l-1;
    ans+=c;
    if(c<0)
    c=-c;
    mi=min(mi,c);
  }
  // cout<<ans<<endl;
  // if(l>0){
  //   ans-=l;
  // }else if(l<0){
  //   if(-l>n){
  //     ans-=n+l-1;
  //   }
  // }

  cout<<(ans<0?ans+mi:ans-mi)<<endl;

  return 0;
}
