#include<bits/stdc++.h>
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
  map<string,int> mp;
  int n; cin>>n;
  rep(i,n){
    string s; cin>>s;
    mp[s]++;
  }
  int m; cin>>m;
  rep(i,m){
    string t; cin>>t;
    mp[t]--;
  }
  int ans=0;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    ans=max(ans,itr->second);
  }
  cout<<ans<<endl;

  return 0;

}
