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
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int keta(ll a){
  int k=0;
  while(a/10!=0){
    a/=10;k++;
  }
  k++;
  return k;
}

int main(){
  ll n; cin>>n;
  int ans=INF;
  for(ll i=1;i*i<=n;i++){
    if(n%i!=0) continue;
    ans=min(ans,max(keta(i),keta(n/i)));
  }
  cout<<ans<<endl;

  return 0;
}
