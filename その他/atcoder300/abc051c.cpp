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
  int sx,sy,tx,ty; cin>>sx>>sy>>tx>>ty;
  rep(i,tx-sx) cout<<"R";
  rep(i,ty-sy) cout<<"U";
  rep(i,tx-sx) cout<<"L";
  rep(i,ty-sy) cout<<"D";
  cout<<"D";
  rep(i,tx-sx+1) cout<<"R";
  rep(i,ty-sy+1) cout<<"U";
  cout<<"LU";
  rep(i,tx-sx+1) cout<<"L";
  rep(i,ty-sy+1) cout<<"D";
  cout<<"R"<<endl;


  return 0;
}
