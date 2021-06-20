#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

// struct edge{int to;int cost;};
vector<bool> memo(200001,0);
vector<ll> ans(200001,0);
vector<int> g[200001];

void dfs(int t,ll c){
  memo[t]=1;
  ans[t]=c+ans[t];
  int i;
  for(i=0;i<g[t].size();i++){
    int nt=g[t][i];
    if(memo[nt]==1) continue;
    else{
      ll nc=ans[t];
      // cout<<"t "<<t<<" ans "<<ans[]
      dfs(nt,nc);
    }
  }
}

int main(){
  int n,q;
  cin>>n>>q;

  int i;
  for(i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for(i=0;i<q;i++){
    int p,x;
    cin>>p>>x;
    p--;
    ans[p]+=x;
  }
  dfs(0,0);
  for(i=0;i<n;i++)
  cout<<ans[i]<<(i==n-1?"\n":" ");

}
