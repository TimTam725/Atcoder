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

int dp[100005];

int main(){
  int n; cin>>n;
  string s; cin>>s;
  vector<int> l(26,0);
  vector<int> r(26,0);
  rep(i,s.size()){
    r[s[i]-'a']++;
  }
  // rep(j,26){
  //   cout<<"l "<<l[j]<<" r "<<r[j]<<endl;
  // }
  int ans=0;
  rep(i,s.size()){
    // cout<<"i "<<i<<endl;
    int c=0;
    rep(j,26){
      if(l[j]>0&&r[j]>0)
      c++;
       // cout<<"l "<<l[j]<<" r "<<r[j]<<endl;
    }
    ans=max(ans,c);
    l[s[i]-'a']++;
    r[s[i]-'a']--;
  }
  cout<<ans<<endl;
  return 0;
}
