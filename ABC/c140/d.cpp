#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n,k; cin>>n>>k;
  string s; cin>>s;

  int cnt=0;
  int ans=0;
  rep(i,n-1){
    if(s[i]==s[i+1]) ans++;
  }
  ans=min(n-1,ans+2*k);
  cout<<ans<<endl;

  return 0;
}
