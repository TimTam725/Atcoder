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
  string s; cin>>s;

  int ans=1000;
  rep(i,s.size()-2){
    int a=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
    a=abs(a-753);
    ans=min(ans,a);
  }
  cout<<ans<<endl;
  return 0;
}
