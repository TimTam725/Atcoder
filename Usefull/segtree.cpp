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
int N,dat[2*MAX_N-1];

//segtree初期化
void init(int nc){
  N=1;
  while(N<nc) N*=2;
  rep(i,2*N-1) dat[i]=INF;
}

//配列のk番目の値をaに変更
void update(int k,int a){
  k+=n-1;//配列のk番目はdatのk+n-1番目
  dat[k]=a;
  while(k>0){  //kの子孫を更新
    k=(k-1)/2;//ノードkの親の添字
    dat[k]=min(dat[2*k+1],dat[2*k+2]);
  }
}

//配列の[a,b)の範囲の最小値を求める
//[l,r)の範囲を持つノードkを参照中
int query(int a,int b,int k,int l,int r){
  if(r<=a||b<=l) return INF;
  if(a<=l&&r<=b) return dat[k];
  else{
    int vl=query(a,b,2*k+1,l,(l+r)/2);
    int vr=query(a,b,2*k+2,(l+r)/2,r);
    return min(vl,vr);
  }
}

int main(){
  int n; cin>>n;
  init(n);
  rep(i,n){
    int c; cin>>c;
    update(i,c);
  }
  rep(i,2*N-1){
    cout<<dat[i]<<endl;
  }

  return 0;
}
