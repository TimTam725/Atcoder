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
const ll mod=1000000007;

int main(){
  ll n,a,b; cin>>n>>a>>b;
  ll mid=b-a-1;
  ll top=n-a;
  ll bot=b-1;
  ll ans;
  if(mid%2==0){
    ans=min(mid/2+n-b+1,mid/2+a);
  }else{
    ans=mid/2+1;
  }
  cout<<ans<<endl;

  return 0;
}
