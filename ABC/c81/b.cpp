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
  vector<int> a(n);
  rep(i,n) cin>>a[i];

  int ans=0;
  while(1){
    bool f=0;
    rep(i,n){
      if(a[i]%2!=0){
        f=1;
      }else{
        a[i]/=2;
      }
    }
    if(f)
    break;
    ans++;
  }
  cout<<ans<<endl;

  return 0;
}
