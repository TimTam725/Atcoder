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
  vector<vector<int>> a(3,vector<int>(3));
  vector<vector<bool>> f(3,vector<bool>(3,0));
  rep(i,3){
    rep(j,3){
      cin>>a[i][j];
    }
  }
  int n; cin>>n;
  rep(i,n){
    int b; cin>>b;
    rep(j,3){
      rep(k,3){
        if(a[j][k]==b) f[j][k]=1;
      }
    }
  }
  bool c=0;
  if(f[0][0]&&f[0][1]&&f[0][2])
  c=1;
  if(f[1][0]&&f[1][1]&&f[1][2])
  c=1;
  if(f[2][0]&&f[2][1]&&f[2][2])
  c=1;
  if(f[0][0]&&f[1][0]&&f[2][0])
  c=1;
  if(f[0][1]&&f[1][1]&&f[2][1])
  c=1;
  if(f[0][2]&&f[1][2]&&f[2][2])
  c=1;
  if(f[0][0]&&f[1][1]&&f[2][2])
  c=1;
  if(f[0][2]&&f[1][1]&&f[2][0])
  c=1;

  if(c)
  puts("Yes");
  else
  puts("No");


  return 0;
}
