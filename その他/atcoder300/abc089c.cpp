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
  vector<ll> c(5,0);
  rep(i,n){
    string s; cin>>s;
    if(s[0]=='M')
    c[0]++;
    else if(s[0]=='A')
    c[1]++;
    else if(s[0]=='R')
    c[2]++;
    else if(s[0]=='C')
    c[3]++;
    else if(s[0]=='H')
    c[4]++;
  }
  ll sum=0;
  rep(i,3){
    for(int j=i+1;j<4;j++){
      for(int k=j+1;k<5;k++){
        sum+=c[i]*c[j]*c[k];
      }
    }
  }
  cout<<sum<<endl;

  return 0;
}
