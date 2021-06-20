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
const ll INF=1000000007;
const ll LMAX=1000000000000001;
ll gcd(ll a,ll b){if(a<b)swap(a,b);ll c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};


int main(){
  int n; cin>>n;
  map<string,int> mp;
  rep(i,n){
    string s; cin>>s;
    mp[s]++;
  }
  int k=-1;
  for(auto it=mp.begin();it!=mp.end();it++){
    k=max(k,it->sc);
  }
  for(auto it=mp.begin();it!=mp.end();it++){
  if(it->sc==k)
  cout<<it->fs<<endl;
}


  return 0;
}
