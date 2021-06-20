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
    bool c=0;
    while(left<right){
      // cout<<left<<" "<<right<<endl;
      ll mid=(left+right)/2;
      if(a*mid+b*(j-1)==x){
        ans=mid;
        c=1;
        break;
      }else if(a*mid+b*(j-1)>x){
        right=mid;
      }else if(a*mid+b*(j-1)<x){
        left=mid;
      }
       if(right-left==1)
       break;
      // cout<<mid<<endl;
    }
    if(!c){
      ans=left;
    }
    // for(ll k=i/10;k<=i;k++){
    //   if(a*k+b*(j-1)>x){
    //     ans=k-1;
    //     break;
    //   }
    // }
    cout<<ans<<endl;
  }

  return 0;
}
