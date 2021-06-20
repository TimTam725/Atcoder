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
  string s; cin>>s;
  int c0=0;
  int c1=0;
  rep(i,s.size()){
    if(s[i]=='0')
    c0++;
    else
    c1++;
  }
  int ans=2*min(c1,c0);
  cout<<ans<<endl;

  return 0;
}
