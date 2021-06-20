#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const int INF=10000001;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  rep(i,3){
    if(s[i]=='1')
    s[i]='9';
    else if(s[i]=='9')
    s[i]='1';
  }
  cout<<s<<endl;
  return 0;
}
