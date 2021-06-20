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
  int n,k; cin>>n>>k;
  map<int,int> mp;
  rep(i,n){
    int a; cin>>a;
    mp[a]++;
  }
  if(mp.size()<=k)
  cout<<0<<endl;
  else{
    int c=mp.size()-k;
    int ans=0;
    vector<int> b;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
      b.pb(itr->sc);
    }
    sort(ALL(b));
    rep(i,c)
    ans+=b[i];
    cout<<ans<<endl;
  }


  return 0;
}
