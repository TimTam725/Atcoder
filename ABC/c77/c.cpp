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
  vector<int> b(n);
  vector<int> c(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  rep(i,n) cin>>c[i];

  sort(ALL(a));
  sort(ALL(c));

  ll ans=0;
  rep(i,n){
    ans+=(lower_bound(ALL(a),b[i])-a.begin())*(c.end()-upper_bound(ALL(c),b[i]));

    // cout<<ans<<endl;
  }
  cout<<ans<<endl;

  return 0;
}
