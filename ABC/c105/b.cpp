#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  bool ans=0;
  rep(i,101){
    for(int j=0;j+i<=100;j++){
      if(i*4+j*7==n)
      ans=1;
    }
  }
  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
