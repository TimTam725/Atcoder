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
  int a,b; cin>>a>>b;
  int ans;
  if(a>=13)
  ans=b;
  else if(a>=6)
  ans=b/2;
  else
  ans=0;

  cout<<ans<<endl;
  return 0;
}
