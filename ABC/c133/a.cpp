#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){

  int n,a,b,ans; cin>>n>>a>>b;
  if(a*n>b)
  ans=b;
  else
  ans=a*n;

  cout<<ans<<endl;

  return 0;
}
