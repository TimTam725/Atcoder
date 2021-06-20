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

//配列の個数分だけBITを用意
int bit[MAX_N+1],n;

//1~i番目までの和
int sum(int i){
  int s=0;
  while(i>0){
    s+=bit[i];
    i-=i&-i;
  }
  return s;
}

//配列のi番目にxを加算
void add(int i,int x){
  while(i<=n){
    bit[i]+=x;
    i+=i&-i;
  }
}

int main(){
  int k; cin>>n>>k;
  rep(i,n){
    int a; cin>>a;
    add(i+1,a);
  }
  cout<<sum(k)<<endl;


  return 0;
}
