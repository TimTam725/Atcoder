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
const double PI=3.14159265358979;
const int INF=1000000007;
const ll LMAX=1000000000000000001;
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};


int main(){
  int a,b,c;
  cin>>a>>b>>c;
  double l=0;
  double r=1LL<<62;
  double ft;
  rep(i,1000){
    double m=(r+l)/2;
    ft=a*m+b*sin(c*m*PI);
    if(ft<=100) l=m;
    else r=m;
  }
  cout<<setprecision(30)<<l<<endl;

  return 0;
}
