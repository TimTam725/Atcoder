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
  int n,m,X,Y; cin>>n>>m>>X>>Y;
  vector<int> x(n);
  vector<int> y(m);
  rep(i,n) cin>>x[i];
  rep(i,m) cin>>y[i];

  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
  bool w=0;
  for(int i=-100;i<=100;i++){
    if(X<i&&i<=Y&&(x[n-1]<i)&&(i<=y[0])){
      w=1;
      // cout<<i<<endl;
    }
  }
  if(w)
  cout<<"No War"<<endl;
  else
  cout<<"War"<<endl;

  return 0;
}
