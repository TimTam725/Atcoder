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
  int n;
  cin>>n;
  vector<P> p(n);
  vector<int> p1(n);
  vector<int> p2(n);
  vector<int> p3(n);
  rep(i,n){
    int x,l; cin>>x>>l;
    p[i].fs=x-l;
    p[i].sc=x+l;
  }
  sort(ALL(p));
  rep(i,n){
    p1[i]=p[i].fs;
    p2[i]=p[i].sc;
    p3[i]=1;
  }
  int ans=1;
  for(int i=n-1;i>=0;i--){
    auto itr=lower_bound(ALL(p1),p2[i]);
    if(itr==p1.end())
    p3[i]=ans;
    else{
      int id=itr-p1.begin();
      if(ans<p3[id]+1){
        p3[i]=p3[id]+1;
        ans++;
      }else
      p3[i]=ans;
    }
  }

  cout<<p3[0]<<endl;

  return 0;
}
