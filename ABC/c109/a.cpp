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
  bool c=0;
  for(int i=1;i<=3;i++){
    if(a*b*i%2==1)
    c=1;
  }
  if(c)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
