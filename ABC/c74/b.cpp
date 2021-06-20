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
  int ans=0;
  rep(i,n){
    int x; cin>>x;
    if(x>abs(k-x))
    ans+=2*abs(k-x);
    else
    ans+=2*x;
  }
  cout<<ans<<endl;

  return 0;
}
