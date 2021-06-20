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
  int n; cin>>n;
  vector<int> l(n);
  rep(i,n) cin>>l[i];
  sort(l.begin(),l.end());
  int sum=0;
  rep(i,n-1)
  sum+=l[i];
  if(sum>l[n-1])
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
