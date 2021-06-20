#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

struct edge{
  int to,l;
};
vector<vector<edge>> g(100005);
bool memo[100005];
bool ans[100005];

void dfs(int u,int leng){
  memo[u]=1;
  if(leng%2==0) ans[u]=1;

  rep(i,g[u].size()){
    int v=g[u][i].to;
    if(memo[v]) continue;
    dfs(v,leng+g[u][i].l);
  }
}

int main(){
  int n; cin>>n;
  rep(i,n-1){
    int u,v,w; cin>>u>>v>>w;
    u--;v--;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
  }
  dfs(0,0);
  rep(i,n){
    cout<<(ans[i]?"0":"1")<<endl;
  }
}
