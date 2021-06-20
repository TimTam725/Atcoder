#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;
vector<vector<int>> g(100001);
int dist[100101][3];

int main(){
  int n,m; cin>>n>>m;
  rep(i,m){
    int u,v; cin>>u>>v;
    u--;v--;
    g[u].push_back(v);
  }
  int s,t; cin>>s>>t;
  s--,t--;

  rep(i,n)rep(j,3)dist[i][j]=INF;
  queue<P> q;
  q.push({s,0});
  dist[s][0]=0;
  while(!q.empty()){
    int v=q.front().first;
    int l=q.front().second;
    q.pop();
     // cout<<"v "<<v+1<<endl;
    rep(i,g[v].size()){
      int u=g[v][i];
      int nl=(l+1)%3;
      if(dist[u][nl]!=INF) continue;
      dist[u][nl]=dist[v][l]+1;
      q.push({u,nl});
       // cout<<"u "<<u+1<<" nl "<<nl<<" dist "<<dist[u][nl]<<endl;
    }
  }

  int ans=dist[t][0];
  if(ans==INF) ans=-1;
  else ans/=3;
  cout<<ans<<endl;

  // cout<<q.front().first<<endl;
  return 0;
}
