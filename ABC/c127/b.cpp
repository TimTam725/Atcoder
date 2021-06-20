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
  int r,d,x; cin>>r>>d>>x;
  ll a=x;
  rep(i,10){
    a=r*a-d;
    cout<<a<<endl;
  }
  return 0;
}
