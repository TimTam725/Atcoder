#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

//立っているビットを数える
int bitCount(int bits) {
    int cnt = 0;
    for(int mask = 1; mask != 0; mask<<=1) {
        if( (bits & mask) != 0 )
            ++cnt;
    }
    return cnt;
}

int main(){
  int n,m; cin>>n>>m;
  vector<int> k(m);
  vector<int> p(m);
  vector<int> s(m);
  rep(i,m){
    cin>>k[i];
    int bit=0;
    rep(j,k[i]){
      int ss; cin>>ss;
      //ss番目のビットを立てる
      bit|=(1<<ss-1);
    }
    s[i]=bit;
  }
  rep(i,m) cin>>p[i];
  // rep(i,m) cout<<bitset<8>(s[i])<<endl;

  int ans=0;
  for(int bit=0;bit<(1<<n);bit++){
    // cout<<bitset<8>(bit)<<endl;
    bool chek=1;
    rep(i,m){
      int a=bit&s[i];
      a=bitCount(a);
      if(a%2!=p[i]){
        chek=0;
        break;
      }
    }
    if(chek)
    ans++;
  }

    cout<<ans<<endl;

    return 0;
  }
