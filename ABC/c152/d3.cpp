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
  vector<vector<ll>> a(9,vector<ll>(9,0));
  int k=1;
  ll ans=0;
  for(int i=1;i<=n;i++){
    if(i==k*10) k*=10;
    int A=i%10;A--;
    int B=i/k;B--;
    if(A<0) continue;

    a[B][A]++;
  }

  rep(i,9){
    rep(j,9){
      ans+=a[i][j]*a[j][i];
    }
  }
  cout<<ans<<endl;

  return 0;
}
