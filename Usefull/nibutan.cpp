#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

// char al(char zz,int n){
//
// }

int main(){
  ll a,b,x; cin>>a>>b>>x;
  ll i=1;
  ll j=1;
  ll ans=0;
  while(a*i+b*j<=x){
    if(i==10000000000)
    break;
    i*=10;
    j++;
  }
   // cout<<i<<" "<<j<<endl;
  if(i==10000000000){
    cout<<i/10<<endl;
    // cout<<"ko"<<endl;
  }else{
    ll left=i/10;
    ll right=i;
    while(right-left>1){//残り二個になるまで
      ll mid=(left+right)/2;
      if(a*mid+b*(j-1)<=x){
        left=mid;//right(mid)までの値は常に上の条件を満たしている
      }else{
        right=mid;
      }
      // cout<<left<<" "<<right<<endl;
    }
    cout<<left<<endl;
  }
  return 0;
}
