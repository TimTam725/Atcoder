#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=1000000009;
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
  vector<vector<P>> x(n);
  rep(i,n){
    int a; cin>>a;
    rep(j,a){
      int b,c; cin>>b>>c;
       b--;
      x[i].push_back({b,c});
    }
  }

  int ans=0;
  for(int bit=0;bit<(1<<n);bit++){
    bool z=1;
    // cout<<bitset<8>(bit)<<endl;
    rep(i,n){
      rep(j,x[i].size()){
        int b=x[i][j].first;
        int c=x[i][j].second;
        int d=(1<<b)&bit;
        int f=(1<<i)&bit;
        if(f>0){
          // cout<<"d "<<endl;
          // cout<<bitset<8>(d)<<endl;
          if(d>0&&c==0||d==0&&c==1)
          z=0;
          // if(c)
          // cout<<"Y"<<endl;
          // else
          // cout<<"z"<<endl;
        }
      }
    }
    if(z){
      // cout<<"kotae "<<bitset<8>(bit)<<endl;
      ans=max(ans,bitCount(bit));
      // cout<<ans<<endl;
    }
  }
  cout<<ans<<endl;
  // rep(i,n){
  //   rep(j,x[i].size()){
  //     cout<<x[i][j].first<<" "<<x[i][j].second;
  //   }
  //   cout<<endl;
  // }


  return 0;
}
