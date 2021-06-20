#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const int INF=10000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<tuple<ll,ll,ll>> t(n);
  rep(i,n){
    ll x,y,h; cin>>x>>y>>h;
    get<0>(t[i])=h;
    get<1>(t[i])=x;
    get<2>(t[i])=y;
  }

  sort(t.begin(),t.end());
  int cx;
  int cy;
  ll H;

  rep(i,101){
    rep(j,101){
      ll Hh=get<0>(t[n-1])+(ll)abs(get<1>(t[n-1])-i)+(ll)abs(get<2>(t[n-1])-j);
      bool c=1;
      for(int k=n-1;0<=k;k--){
        ll nh=get<0>(t[k])+(ll)abs(get<1>(t[k])-i)+(ll)abs(get<2>(t[k])-j);
        if(get<0>(t[k])>0){
          if(nh!=Hh){
            c=0;
            break;
          }
        }else{
          if(nh<Hh){
            c=0;
            break;
          }
        }
      }
      if(c){
        cx=i;
        cy=j;
        H=Hh;
      }
    }
  }

  cout<<cx<<" "<<cy<<" "<<H<<endl;
  return 0;
}
