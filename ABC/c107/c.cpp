#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int n,k; cin>>n>>k;
  vector<int> x(n);
  rep(i,n) cin>>x[i];

  int ans=1000000009;
  int i=0;
  while(k+i-1<n){
    int l=x[i];
    int r=x[k-1+i];
    // cout<<"l "<<l<<" r "<<r<<endl;
    if(l<0){
      if(r<=0)
      ans=min(ans,-l);
      else{
        int g=min(-l*2+r,r*2-l);
        ans=min(ans,g);
      }
    }else{
      ans=min(ans,r);
    }
    i++;
    // cout<<"ans "<<ans<<endl;
  }
  cout<<ans<<endl;


  return 0;
}
