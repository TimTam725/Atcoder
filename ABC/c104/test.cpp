#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int d,g; cin>>d>>g;
  vector<P> p(d);
  rep(i,d){
    int a,b; cin>>a>>b;
    p[i]={a,b};
  }

  int ans=100009;
  for(int bit=0;bit<(1<<d);bit++){
    int c=0;
    int sum=0;
    // cout<<"bit "<<bitset<8>(bit)<<endl;
    rep(i,d){
      int chek=(1<<i)&bit;
      if(chek!=0){
        c+=p[i].first;
        sum+=(i+1)*100*p[i].first+p[i].second;
      }
    }
    if(sum>=g){
      ans=min(ans,c);
      continue;
    }
    for(int i=d-1;i>=0;i--){
      int chek=(1<<i)&bit;
      if(chek!=0) continue;
      bool z;
      rep(j,p[i].first){
        c++;
        sum+=(i+1)*100;
        if(sum>=g){
          ans=min(ans,c);
          z=1;
          break;
        }
      }
      if(z)
      break;
    }
    // cout<<"sum "<<sum<<" c "<<c<<endl;
  }

  cout<<ans<<endl;

  return 0;
}
