#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,char> pl;

vector<int> G[200001];
vector<ll> dp(200001,0);
vector<bool> memo(200001,0);

void dfs(int node,int cost){
  dp[node]+=cost;
  memo[node]=1;
  for(int i=0;i<G[node].size();i++){
    int to=G[node][i];
    if(memo[to])continue;
    int tocost=dp[node];
    dfs(to,tocost);
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
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for(i=0;i<q;i++){
    int p,x;
    cin>>p>>x;
    p--;
    dp[p]+=x;
  }

  dfs(0,0);
  for(i=0;i<n;i++){
    cout<<dp[i]<<(i==n-1?"\n":" ");
  }
}
