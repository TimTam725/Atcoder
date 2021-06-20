#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<ll,ll> P;
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

int main(){
  int n; cin>>n;
  vector<P> lr(n);
  priority_queue<int> pq1;
  priority_queue<int> pq2;
  rep(i,n) cin>>lr[i].fs>>lr[i].sc;
  sort(ALL(lr));

  vector<ll> d(n);
  for(int i=0;i<n-1;i++){
    ll l=lr[i].fs;
    pq1.push(-lr[i].sc);
    ll r=-pq1.top();
    ll A=(r-l+1);
    if(A<0) A=0;
    d[i]=A;
    // cout<<A<<" "<<B<<endl;
  }
  ll ans=0;
  ll l=lr[n-1].fs;
  pq2.push(-lr[n-1].sc);
  for(int i=n-1;0<i;i--){
    pq2.push(-lr[i].sc);
    ll r=-pq2.top();
    ll B=(r-l+1);
    if(B<0) B=0;
    ans=max(ans,d[i-1]+B);
   cout<<d[i-1]<<" "<<B<<endl;
  }
  cout<<ans<<endl;

  return 0;
}
