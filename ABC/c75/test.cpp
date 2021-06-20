#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const int INF=1000000001;
const double PI=3.141592653589;

vector<vector<int>> g(55);

void dfs(int u,P M,vector<bool> &memo){
  memo[u]=1;
  rep(i,g[u].size()){
    int to=g[u][i];
    P p1={u,to};
    P p2={to,u};
    if(memo[to]||p1==M||p2==M) continue;
    dfs(to,M,memo);
  }
}

int main(){
  int n,m; cin>>n>>m;
  vector<P> M(m);

  rep(i,m){
    int u,v; cin>>u>>v;
    u--;v--;
    M[i]={u,v};
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans=0;
  rep(i,m){
    vector<bool> memo(n,0);
    dfs(0,M[i],memo);
    rep(j,n){
      if(!(memo[j])){
        ans++;
        break;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
