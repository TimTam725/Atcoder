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
  vector<vector<int>> c(3,vector<int>(3));
  rep(i,3){
    rep(j,3) cin>>c[i][j];
  }
  vector<int> b(3);
  rep(i,3) b[i]=c[0][i];

  bool f=1;
  if((c[1][0]-b[0]!=c[1][1]-b[1])||(c[1][0]-b[0]!=c[1][2]-b[2])||(c[1][1]-b[1]!=c[1][2]-b[2]))
  f=0;
  if((c[2][0]-b[0]!=c[2][1]-b[1])||(c[2][0]-b[0]!=c[2][2]-b[2])||(c[2][1]-b[1]!=c[2][2]-b[2]))
  f=0;

  if(f) puts("Yes");
  else puts("No");

  return 0;
}
