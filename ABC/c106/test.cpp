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
  string s; cin>>s;
  ll k; cin>>k;
  bool c=1;
  rep(i,s.size()){
    if(s[i]!='1'){
      if(i>=k)
      cout<<1<<endl;
      else
      cout<<s[i]<<endl;
      c=0;
      break;
    }
  }
  if(c)
  cout<<1<<endl;

  return 0;
}
