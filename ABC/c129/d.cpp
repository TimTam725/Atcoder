#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=1000000007;


int main(){
  int h,w; cin>>h>>w;
  vector<string> s(h);
  rep(i,h) cin>>s[i];

  vector<vector<P>> p(h,vector<P>(w));
  rep(j,w){
    int t=0;
    int b;
    while(t<h){
      for(b=t;b<h;b++){
        if(s[b][j]=='#')
        break;
      }
      for(int i=t;i<b;i++)
      p[i][j].first=b-t;
      t=b+1;
      // cout<<t<<endl;
    }
  }
  rep(j,h){
    int t=0;
    int b;
    while(t<w){
      for(b=t;b<w;b++){
        if(s[j][b]=='#')
        break;
      }
      for(int i=t;i<b;i++)
      p[j][i].second=b-t;
      t=b+1;
      // cout<<t<<endl;
    }
  }
  int ans=0;
   rep(i,h){
     rep(j,w){
       ans=max(ans,p[i][j].first+p[i][j].second);
     }
   }
   cout<<ans-1<<endl;

}
