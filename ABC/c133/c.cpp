#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  l l,r; cin>>l>>r;
  int ans=INF;
  // int ll=l%2019;
  // int rr=r%2019;
  for(int i=l;i<r;i++){
    for(int j=l+1;j<=r;j++){
      int a=(i*j)%2019;
      ans=min(a,ans);
    }
    if(ans==0)
    break;
  }
  cout<<ans<<endl;
  return 0;
}
