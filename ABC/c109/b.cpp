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
  set<string> s;
  bool c=1;
  vector<string> w(n);
  rep(i,n) cin>>w[i];

  s.insert(w[0]);
  for(int i=1;i<=n-1;i++){
    if(s.count(w[i])||w[i-1][w[i-1].size()-1]!=w[i][0])
    c=0;
    s.insert(w[i]);
  }
  if(c)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;


  return 0;
}
