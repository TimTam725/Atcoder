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
const ll mod=1000000007;

bool sosu(ll a){
  for(ll i=2;i*i<=a;i++){
    if(a%i==0) return 0;
    // cout<<i<<endl;
  }
  return 1;
}

int main(){
  ll x; cin>>x;

  while(1){
    // cout<<"x "<<x<<endl;
    bool c=sosu(x);
    if(c||x==2){
      cout<<x<<endl;
      return 0;
    }
    x++;
    // if(x==30)
    // break;
  }
  return 0;
}
