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
  int ans=100005;

  int c=0;
  string ss;
  ss=s;
  if(s[0]!='0'){
    c++;
    ss[0]='0';
  }
  rep(i,ss.size()-1){
    if(ss[i]==ss[i+1]){
      c++;
      if(ss[i]=='0')
      ss[i+1]='1';
      else
      ss[i+1]='0';
    }
  }

  ans=min(ans,c);
  c=0;

  ss=s;
  if(s[0]!='1'){
    c++;
    ss[0]='1';
  }
  rep(i,ss.size()-1){
    if(ss[i]==ss[i+1]){
      c++;
      if(ss[i]=='0')
      ss[i+1]='1';
      else
      ss[i+1]='0';
    }
  }
  ans=min(ans,c);
  cout<<ans<<endl;

  return 0;
}
