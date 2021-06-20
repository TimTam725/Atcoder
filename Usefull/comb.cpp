#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=1000000000+7;
const double PI=3.141592653589;

// オーバーフローに気を付ける
vector<vector<ll>> comb(int n, int r) {
  vector<vector<ll>> v(n+1,vector<ll>(n+1,0));
  for(int i=0; i<v.size();i++) {
    v[i][0]=1;
    v[i][i]=1;
  }
  for (int j=1;j<v.size();j++) {
    for (int k=1;k<j;k++) {
      v[j][k]=(v[j-1][k-1]+v[j-1][k]);
    }
  }
  return v;
}

int main(){
  int n; cin>>n;

  auto c=comb(n,n/2);
  // rep(i,n+1){
  //   rep(j,n+1){
  //     cout<<c[i][j]<<(j==n?"\n":" ");
  //   }
  // }
  cout<<c[n][n/2]<<endl;

  return 0;
}
