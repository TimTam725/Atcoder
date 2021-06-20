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
  int n,m; cin>>n>>m;
  int ml=-1;
  int mr=100005;
  rep(i,m){
    int l,r; cin>>l>>r;
    ml=max(ml,l);
    mr=min(mr,r);
  }
  if(mr-ml<0)
  cout<<0<<endl;
  else
  cout<<mr-ml+1<<endl;
  return 0;
}
