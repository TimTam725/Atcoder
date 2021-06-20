#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

vector<vector<int>> g(100005);
bool memo[100005];
map<P,int> m;

void color(int u,int pu,int k){
  memo[u]=1;
  // cout<<"u "<<u<<endl;
  int j=1;
  rep(i,g[u].size()){
    int to=g[u][i];
    // cout<<"to "<<to<<endl;
    if(memo[to]) continue;
    if(j==m[{u,pu}]) j++;
    P c={u,to};
    P d={to,u};
    m[c]=j;
    m[d]=j;
    j++;
    // cout<<"u to m "<<u<<" "<<to<<" "<<j<<endl;
    color(to,u,k);
  }
}

int main(){
  int n; cin>>n;
  vector<P> a(n-1);
  rep(i,n-1){
    int u,v; cin>>u>>v;
    u--;v--;
    g[u].push_back(v);
    g[v].push_back(u);
    a[i]={u,v};
  }

  P k={-1,-1};
  rep(i,n){
    k=max(k,{g[i].size(),i});
  }

  color(k.second,-1,k.first);

  cout<<k.first<<endl;
  rep(i,n-1){
    cout<<m[a[i]]<<endl;
  }

  return 0;
}
