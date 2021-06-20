#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;


int main(){
  ll n,k; cin>>n>>k;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  ll ans=0;
  ll sum=0;
  int r=0;
  for(int l=0;l<n;l++){
    while(sum<k){
      if(r==n)
      break;
      sum+=a[r];
      r++;
    }
    if(sum>=k)
    ans+=n-(r-1);
    sum-=a[l];
  }
cout<<ans<<endl;

return 0;
}
