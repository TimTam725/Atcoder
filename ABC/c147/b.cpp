#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=1000000009;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  int ans=0;
  rep(i,s.size()/2){
    if(s[i]!=s[s.size()-1-i])
    ans++;
  }
  cout<<ans<<endl;


  return 0;
}
