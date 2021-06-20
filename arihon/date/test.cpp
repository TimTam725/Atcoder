#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

struct edge{int to;int cost;};
vector<edge> g[100001];
vector<bool> memo(100001,0);
vector<bool> ans(100001,0);

void arc(int t,int c){
  int i;
  memo[t]=1;
  for(i=0;i<g[t].size();i++){
    int nt=g[t][i].to;
    if(memo[nt]) continue;
    else{
      ll nc=c+g[t][i].cost;
      if(nc%2!=0) ans[nt]=1;
      arc(nt,nc);
    }
  }
}

int main(){
  int n;
  cin>>n;

  int i;
  for(i=0;i<n-1;i++){
    int u,v,w;
    cin>>u>>v>>w;
    u--;v--;
    edge a={u,w};
    edge b={v,w};
    g[u].push_back(b);
    g[v].push_back(a);
  }

  arc(0,0);
  for(i=0;i<n;i++){
    if(ans[i])
    cout<<1<<endl;
    else
    cout<<0<<endl;
  }

}
