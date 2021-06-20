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

int bitCount(int bits) {
    int cnt = 0;
    for(int mask = 1; mask != 0; mask<<=1) {
        if( (bits & mask) != 0 )
            ++cnt;
    }
    return cnt;
}

int main(){
  int n; cin>>n;
  vector<int> f(n);
  vector<vector<int>> p(n,vector<int>(11));
  rep(i,n){
    int F=0;
    rep(j,10){
      int a; cin>>a;
      if(a==1)
      F|=(1<<(9-j));
    }
    f[i]=F;
  }
  rep(i,n){
    rep(j,11){
      cin>>p[i][j];
    }
  }

  int ans=-INF;
  for(int bit=1;bit<(1<<10);bit++){
    int cnt=0;
    rep(i,n){
      int c=bitCount(bit&f[i]);
      cnt+=p[i][c];
    }
    ans=max(ans,cnt);
  }
  cout<<ans<<endl;
  // rep(i,n)
  // cout<<bitset<16>(f[i])<<endl;

  return 0;
}
