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
  int n; cin>>n;
  vector<int> c(n-1);
  vector<int> s(n-1);
  vector<int> f(n-1);
  rep(i,n-1) cin>>c[i]>>s[i]>>f[i];

  rep(i,n-1){
    int t=0;
    for(int j=i;j<n-1;j++){
      if(t<s[j]) t=s[j]+c[j];
      else{
        if(t%f[j]) t=f[j]*(t/f[j]+1)+c[j];
        else t+=c[j];
      }
    }
    cout<<t<<endl;
  }
  cout<<0<<endl;

  return 0;
}
