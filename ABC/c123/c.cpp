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
  ll n,a,b,c,d,e; cin>>n>>a>>b>>c>>d>>e;
  ll mm=min({a,b,c,d,e});
  if(n%mm==0)
  cout<<n/mm+4<<endl;
  else
  cout<<n/mm+5<<endl;

  return 0;
}
