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
  int n,m; cin>>n>>m;
  vector<string> a(n);
  vector<string> b(m);
  rep(i,n) cin>>a[i];
  rep(i,m) cin>>b[i];

  int x=0;
  int y=0;
  while(x+m<=n){
    bool c=1;
    for(int i=x;i<x+m;i++){
      for(int j=y;j<y+m;j++){
        // cout<<"a "<<a[i][j]<<" b "<<b[i-x][j-y]<<endl;
        if(a[i][j]!=b[i-x][j-y])
        c=0;
      }
    }
    if(c){
      puts("Yes");
      return 0;
    }
    y++;
    if(y+m>=n){
      y=0;x++;
    }
  }
  puts("No");

  return 0;
}
