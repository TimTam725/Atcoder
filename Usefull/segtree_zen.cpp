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
const int INF=1<<30;
const ll LMAX=1000000000000000001;
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

const int MAX_N=1<<20;

//data:その節点の区間全体に一様に加えられた値
//datb:その節点の区間に一様でなく加えられた値の和
ll data[MAX_N],datb[MAX_N];

//[a,b)にxを加算
void add(int a,int b,int x,int k,int l,int r){
  if(a<=l&&r<=b) data[k]+=x;
  else if(l<b&&a<r){
    datb[k]+=(min(r,b)-max(l,a))*x;
    add(a,b,x,k*2+1,l,(r+l)/2);
    add(a,b,x,k*2+2,(r+l)/2,r);
  }
}

//[a,b)の和を計算
ll sum(int a,int b,int k,int l,int r){
  if(r<=a||b<=l) return 0;
  else if(a<=l&&r<=b) return data[k]*(r-l)+datb[k];
  else{
    ll res=(min(r,b)-max(l,a))*data[k];
    res+=sum(a,b,k*2+1,l,(r+l)/2);
    res+=sum(a,b,k*2+2,(r+l)/2,r);
    return res;
  }
}

int main(){
  int n; cin>>n;
  rep(i,n){
    int a; cin>>a;
    add(i,i+1,a,0,0,n);
  }
  int l,r,x; cin>>l>>r>>x;
  cout<<sum(l,r,0,0,n)<<endl;
  add(l,r,x,0,0,n);
  cout<<sum(l,r,0,0,n)<<endl;

  return 0;
}
