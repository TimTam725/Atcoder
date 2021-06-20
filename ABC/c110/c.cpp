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
  string s,t; cin>>s>>t;
  vector<int> a(26,-1);
  vector<int> b(26,-1);

  bool ans=1;
  rep(i,s.size()){
    int aa=s[i]-'a';
    int bb=t[i]-'a';

    if(a[aa]>=0){
      if(a[aa]!=bb){
        ans=0;
        break;
      }
    }if(b[bb]>=0){
      if(b[bb]!=aa){
        ans=0;
        break;
      }
    }if(a[aa]<0){
      a[aa]=bb;
    }if(b[bb]<0){
      b[bb]=aa;
    }
  }
  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
