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
const double PI=3.141592653589;
const int INF=1000000007;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};


int main(){
  int n; cin>>n;
  int k=1;
  vector<vector<ll>> p(9,vector<ll>(9,0));

  for(int i=1;i<=n;i++){
    if(i==k*10) k*=10;
    int a=i/k;
    int b=i%10;
    if(i<10) b=i;
    // cout<<i<<endl;
    // cout<<a<<" "<<b<<endl;
    a--;b--;
    if(b<0) continue;
    p[a][b]++;
  }
  ll ans=0;
  rep(i,9){
    rep(j,9){
      ans+=p[i][j]*p[j][i];
    }
  }
  cout<<ans<<endl;

  return 0;
}
