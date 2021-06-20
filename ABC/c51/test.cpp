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
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  int a,b,c,d; cin>>a>>b>>c>>d;
  string s;
  rep(i,c-a)
  s+='R';
  rep(i,d-b)
  s+='U';
  rep(i,c-a)
  s+='L';
  rep(i,d-b+1)
  s+='D';

  rep(i,c-a+1)
  s+='R';
  rep(i,d-b+1)
  s+='U';
  s+='L';s+='U';
  rep(i,c-a+1)
  s+='L';
  rep(i,d-b+1)
  s+='D';
  s+='R';

  // int ans=(c-a+d-b)*2+((d-b)+2+(c-a)+2)*2;
  cout<<s<<endl;
  return 0;
}
