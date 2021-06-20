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
  int ans=1;
  rep(i,n){
    if(ans+k>ans*2)
    ans*=2;
    else
    ans+=k;
  }
  cout<<ans<<endl;

  return 0;
}
