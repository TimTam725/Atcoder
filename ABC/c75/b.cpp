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


int main(){
  int h,w; cin>>h>>w;
  vector<string> s(h); rep(i,h) cin>>s[i];
  vector<vector<int>> ans(h,vector<int>(w));
  int dx[8]={-1,-1,0,1,1,1,0,-1};
  int dy[8]={0,1,1,1,0,-1,-1,-1};
  rep(i,h){
    rep(j,w){
      if(s[i][j]=='#'){
        ans[i][j]=-1;
        continue;
      }
      int c=0;
      rep(k,8){
        int x=i+dx[k];
        int y=j+dy[k];
        if(x<0||h<=x||y<0||w<=y||s[x][y]=='.') continue;
        c++;
      }
      ans[i][j]=c;
    }
  }
  rep(i,h){
    rep(j,w){
      if(ans[i][j]==-1)
      cout<<"#";
      else
      cout<<ans[i][j];
    }
    cout<<endl;
  }

  return 0;
}
