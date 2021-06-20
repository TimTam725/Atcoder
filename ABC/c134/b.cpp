#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n,d; cin>>n>>d;
  int ans=n/(2*d+1);
  if(n%(2*d+1)!=0)
  ans++;

  cout<<ans<<endl;
  return 0;
}
