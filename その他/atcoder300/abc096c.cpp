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

int h,w;
string g[55];
bool memo[55][55];

void solve(int i,int j){
  rep(k,4){
    int x=i+dx[k];
    int y=j+dy[k];
    if(x<0||h<=x||y<0||w<=y||g[x][y]=='.'||memo[x][y]) continue;
    memo[i][j]=1;
    memo[x][y]=1;
    solve(x,y);
  }
}

int main(){
  cin>>h>>w;
  rep(i,h){
    cin>>g[i];
  }
  rep(i,h){
    rep(j,w){
      if(!memo[i][j]&&g[i][j]=='#'){
        solve(i,j);
      }
    }
  }
  rep(i,h){
    rep(j,w){
      if(g[i][j]=='#'&&!memo[i][j]){
        puts("No");
        return 0;
      }
    }
  }
  puts("Yes");

  return 0;
}
