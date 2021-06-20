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
  map<int,int> mp;
  rep(i,n){
    int a; cin>>a;
    mp[a]++;
  }
  int ans=0;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    int f=itr->fs;
    int s=itr->sc;
    if(s<f)
    ans+=s;
    else
    ans+=s-f;
    // cout<<f<<" "<<s<<endl;
  }
  cout<<ans<<endl;

  return 0;
}
