#include<bits/stdc++.h>
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
  vector<string> s(h);
  rep(i,h) cin>>s[i];

  vector<int> dx={-1,0,1,0};
  vector<int> dy={0,1,0,-1};
  // rep(i,4)
  // cout<<dx[i]<<endl;
  vector<vector<bool>> memo(h,vector<bool>(w));

  rep(i,h){
    rep(j,w){
      if(memo[i][j]||s[i][j]=='.') continue;
      queue<P> st;
      // cout<<"iku"<<endl;
      st.push({i,j});
      while(!(st.empty())){
        int x=st.front().fs;
        int y=st.front().sc;
        rep(k,4){
          int zx=x+dx[k];
          int zy=y+dy[k];

          // if(x==0&&y==6)
          // cout<<zx<<" "<<zy<<endl;
          if(zx<0||h<=zx||zy<0||w<=zy) continue;
          if(s[zx][zy]=='#'&&!(memo[zx][zy])){
            memo[zx][zy]=1;
            // memo[zx-dx[k]][zy-dy[k]]=1;
            st.push({zx,zy});
          }
        }
        st.pop();
      }
    }
  }

  rep(i,h){
    rep(j,w){
      if(s[i][j]=='#'&&!(memo[i][j])){
        cout<<"No"<<endl;
        return 0;
      }
    }
  }

  cout<<"Yes"<<endl;

  return 0;

}
