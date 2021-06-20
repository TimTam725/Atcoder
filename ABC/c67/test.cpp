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


int main(){
  int n; cin>>n;
  ll A=0;
  ll B=0;
  vector<ll> a(n);
  rep(i,n){
    cin>>a[i];
    if(i!=0)
    B+=a[i];
  }
  A=a[0];
  ll ans=abs(A-B);
  for(int i=1;i<n-1;i++){
    A+=a[i];
    B-=a[i];
    ans=min(ans,abs(A-B));
  }
  cout<<ans<<endl;


  return 0;
}
