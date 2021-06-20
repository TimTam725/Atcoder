#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;
ll a=1000000000+7;
map<int,int> mp;

void pf(int m){
  for(int i=2;i*i<=m;i++){
    if(m%i) continue;
    while(m%i==0){
      mp[i]++;
      m/=i;
    }
  }
  if(m!=1) mp[m]++;
}

ll comb(int c,int b){
  if(b>c-b) return comb(c,c-b);
  ll ans=1;
  for(int i=0;i<b;i++){
    ans*=(c-i);
    ans/=(i+1);
  }
  return ans;
}


int main(){
  int n,m; cin>>n>>m;

  ll ans=1;
  pf(m);

  for(auto iter=mp.begin();iter!=mp.end();iter++){
    ans*=comb(n-1+iter->second,iter->second)%a;
    // cout<<"iter->f "<<iter->first<<"iter->second "<<iter->second<<endl;
    ans%=a;
    // cout<<"ans "<<ans<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
