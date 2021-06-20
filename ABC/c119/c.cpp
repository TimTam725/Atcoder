#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int l[8];
int L[3];
int ans=1000000009;

void dfs(int a,int b, int c,int index,int n,int cost){
  if(index==n){
    if(a!=0&&b!=0&&c!=0){
      // cout<<"cost "<<cost<<endl;
      // cout<<a<<" "<<b<<" "<<c<<endl;
      cost+=abs(L[0]-a)+abs(L[1]-b)+abs(L[2]-c);
      ans=min(ans,cost);
    }
  }else{
    // cout<<"index "<<index<<endl<<a<<" "<<b<<" "<<c<<endl;
    if(a!=0)
    dfs(a+l[index],b,c,index+1,n,cost+10);
    else
    dfs(a+l[index],b,c,index+1,n,cost);
    if(b!=0)
    dfs(a,b+l[index],c,index+1,n,cost+10);
    else
    dfs(a,b+l[index],c,index+1,n,cost);
    if(c!=0)
    dfs(a,b,c+l[index],index+1,n,cost+10);
    else
    dfs(a,b,c+l[index],index+1,n,cost);
    dfs(a,b,c,index+1,n,cost);
  }
}

int main(){
  int n,a,b,c; cin>>n>>a>>b>>c;
  rep(i,n) cin>>l[i];
  L[0]=a; L[1]=b; L[2]=c;
  // int aa=abs(0-b);
  // cout<<-b<<" "<<aa<<endl;
  dfs(0,0,0,0,n,0);
  cout<<ans<<endl;

  return 0;
}
