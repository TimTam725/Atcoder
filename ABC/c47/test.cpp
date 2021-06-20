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
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  int w,h,n; cin>>w>>h>>n;
  int a=0;
  int b=w;
  int c=0;
  int d=h;
  rep(i,n){
    int x,y,A; cin>>x>>y>>A;
    if(A==1)
    a=max(a,x);
    else if(A==2)
    b=min(x,b);
    else if(A==3)
    c=max(c,y);
    else
    d=min(y,d);
  }
  // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  int ans=(b-a)*(d-c);
  if(b-a<=0||d-c<=0)
  ans=0;
  cout<<ans<<endl;

  return 0;
}
