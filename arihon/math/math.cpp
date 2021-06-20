#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;
ll a=1000000000+7;
map<int,ll> m;

void pf(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i) continue;
    while(n%i==0){
      m[i]++;
      n/=i;
    }
  }
  if(n!=1) m[n]++;
}
int main(){
  int n; cin>>n;

  ll ans=1;
  for(int i=1;i<=n;i++){
    pf(i);
  }

  for(auto iter=m.begin();iter!=m.end();iter++){
    ans*=((iter->second)+1);
    ans%=a;
  }
  cout<<ans<<endl;
  return 0;
}
