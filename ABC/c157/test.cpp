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
ll gcd(ll a,ll b){if(a<b)swap(a,b);ll c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  int n,m; cin>>n>>m;
  vector<int> d(n,-1);
  bool f=0;
  rep(i,m){
    int s,c; cin>>s>>c;
    s--;
    if(d[s]==-1)
    d[s]=c;
    else if(d[s]!=c)
    f=1;
  }
  if(f||(d[0]==0&&n>1))
  cout<<-1<<endl;
  else{
    if(d[0]==-1&&n!=1) d[0]=1;
    rep(i,n){
      if(d[i]==-1) d[i]=0;
      cout<<d[i];
    }
    cout<<endl;
  }

  return 0;
}
