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
  double a,b,x,ans;cin>>a>>b>>x;

  if(a*a*b/2<x){
    ans=PI/2-atan(a*a*a/(2*(a*a*b-x)));
    ans=ans*180/PI;
  }else{
    ans=PI/2-atan(2*x/(a*b*b));
    ans=ans*180/PI;
  }
  cout<<fixed<<setprecision(6)<<ans<<endl;

  return 0;
}
