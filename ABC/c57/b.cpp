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
const int INF=1000000001;
const double PI=3.141592653589;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};



int main(){
  int n,m; cin>>n>>m;
  vector<P> ab(n);
  vector<P> cd(m);
  rep(i,n) cin>>ab[i].fs>>ab[i].sc;
  rep(i,m) cin>>cd[i].fs>>cd[i].sc;

  rep(i,n){
    int goal=INF;
    int id;
    rep(j,m){
      int d=abs(ab[i].fs-cd[j].fs)+abs(ab[i].sc-cd[j].sc);
      if(goal>d){
        goal=d;
        id=j+1;
      }
    }
    cout<<id<<endl;
  }

  return 0;
}
