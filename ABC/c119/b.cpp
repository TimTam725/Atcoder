#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  double ans=0;
  double bit=0;
  rep(i,n){
    double x; cin>>x;
    string u; cin>>u;
    if(u=="JPY")
    ans+=x;
    else
    bit+=x;
  }
  ans+=bit*(380000.0);
  cout<<fixed<<setprecision(5)<<ans<<endl;


  return 0;
}
