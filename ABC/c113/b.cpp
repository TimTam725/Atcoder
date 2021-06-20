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
  double n,t,a; cin>>n>>t>>a;

  double now=1000009;
  int index;
  rep(i,n){
    double h; cin>>h;
    double T=t-h*0.006;
    if(abs(a-T)<now){
      now=abs(a-T);
      index=i;
    }
  }
  cout<<index+1<<endl;

  return 0;
}
