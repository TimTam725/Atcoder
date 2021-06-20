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
const double PI=3.141592653589;
const int INF=1000000007;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);ll c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

vector<vector<int>> g(55);

void solve(int u,int a,int b,vector<bool>& memo){
  memo[u]=1;
  rep(i,g[u].size()){
    int v=g[u][i];
    if((u==a&&v==b)||(u==b&&v==a)) continue;
    if(!(memo[v])) solve(v,a,b,memo);
  }
}

int main(){
  int n,m; cin>>n>>m;
  vector<P> p(m);
  rep(i,m){
    int a,b; cin>>a>>b;
    a--; b--;
    p[i]=mp(a,b);
    g[a].pb(b); g[b].pb(a);
  }
  int s=p[0].fs;
  int sum=0;
  rep(i,m){
    vector<bool> memo(n,0);
    solve(s,p[i].fs,p[i].sc,memo);
    bool f=1;
    rep(i,n){
      if(!memo[i]) f=0;
    }
    if(!f) sum++;
  }
  cout<<sum<<endl;

  return 0;
}
