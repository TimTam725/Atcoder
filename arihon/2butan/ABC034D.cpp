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

int n,k;
vector<double> w;
vector<double> p;

bool solve(double m){
  vector<double> a(n);
  rep(i,n){
    a[i]=(p[i]-m)*w[i];
  }
  sort(ALL(a),greater<double>());
  double sum=0;
  rep(i,k) sum+=a[i];
  if(sum>=0) return 1;
  else return 0;
}

int main(){
  cin>>n>>k;
  rep(i,n){
    double W,P; cin>>W>>P;
    p.pb(P);w.pb(W);
  }
  double l=0;
  double r=100;

  rep(i,100){
    double m=(l+r)/2;
    if(solve(m)) l=m;
    else r=m;
  }
  cout<<setprecision(30)<<l<<endl;

  return 0;
}
