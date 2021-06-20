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
const ll LMAX=1000000000000001;
int dx={-1,0,1,0};
int dy={0,1,0,-1};

int h,w;
int m=0;
vector<string> s;

void solv(int x,int y){
  queue<int> X;
  queue<int> Y;
  vector<vector<bool>> memo(h,vector<bool>(w,0));
  vector<vector<int>> a(h,vector<int>(w,0));
  X.push(x);Y.push(y);
  memo[x][y]=1;
  while(!(X.empty())){
    int Xz=X.front();
    int Yz=Y.front();
    rep(i,4){
      int xz=Xz+dx[i];int yz=Yz+dy[i];
      if(xz<0||xz>=h||yz<0||yz>=w) continue;
      if(s[xz][yz]=='#'||memo[xz][yz]) continue;
      a[xz][yz]=a[Xz][Yz]+1;
      X.push(xz);Y.push(yz);
      memo[xz][yz]=1;
    }
    X.pop();Y.pop();
  }
  rep(k,h){
    rep(l,w){
      m=max(m,a[k][l]);
    }
  }
}

int main(){
  cin>>h>>w;
  rep(i,h){
    string S; cin>>S;
    s.pb(S);
  }

  rep(i,h){
    rep(j,w){
      if(s[i][j]=='#') continue;
      solv(i,j);
    }
  }
  cout<<m<<endl;


  return 0;
}
