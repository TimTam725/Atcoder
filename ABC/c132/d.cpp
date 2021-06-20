#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=1000000000+7;
const double PI=3.141592653589;

vector<vector<ll>> comb(int n, int r) {
    vector<vector<ll>> v(n+1,vector<ll>(n+1,0));
    for(int i=0; i<v.size();i++) {
      v[i][0]=1;
      v[i][i]=1;
    }
    for (int j=1;j<v.size();j++) {
      for (int k=1;k<j;k++) {
        v[j][k]=(v[j-1][k-1]+v[j-1][k])%INF;
      }
    }
    return v;
}

int main(){
  int n,k; cin>>n>>k;

  auto comb1=comb(n,n-k+1);
  auto comb2=comb(n,k-1);
  rep(i,k){
    ll c11=comb1[n-k+1][i+1]%INF;
    ll c22=comb2[k-1][i]%INF;
    // cout<<"cc "<<cc<<endl;
    ll ans=(c11*c22)%INF;
    cout<<ans<<endl;
  }

  return 0;
}
