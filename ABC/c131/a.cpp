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
  bool ans=0;
  if(s[0]==s[1]||s[1]==s[2]||s[2]==s[3])
  ans=0;
  else
  ans=1;

  cout<<(ans?"Good":"Bad");


  return 0;
}
