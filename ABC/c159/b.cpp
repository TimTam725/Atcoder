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

bool kaibun(string s){
  int n=s.size();
  rep(i,n/2){
    if(s[i]!=s[n-1-i]) return 0;
  }
  return 1;
}

int main(){
  string s; cin>>s;
  int n=s.size();
  string s2=s.substr(0,n/2);
  string s3=s.substr(n/2+1,n/2);
  bool a=kaibun(s);
  bool b=kaibun(s2);
  bool c=kaibun(s3);
  if(a&&b&&c)
  puts("Yes");
  else
  puts("No");

  return 0;
}
