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

  int r=0;
  int l=0;
  for(int i=1;i<n;i++){
    if(s[i]=='E')
    r++;
  }
  int ans=INF;
  for(int i=0;i<n;i++){
    ans=min(ans,l+r);
    if(s[i]=='E')
    r--;
    else
    l++;
  }
  cout<<ans<<endl;
  return 0;
}
