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
  vector<int> b(3);
  string s; cin>>s;
  int a;
  rep(i,4){
    if(i==0) a=s[i]-'0';
    else b[i-1]=s[i]-'0';
  }
  // rep(i,3) cout<<b[i]<<endl;
  for(int bit=0;bit<(1<<3);bit++){
    // cout<<bitset<8>(bit)<<endl;
    int sum=a;
    rep(i,3){
      int d=(1<<i);
      if((bit&d)!=0) sum+=b[i];
      else sum-=b[i];
      // cout<<sum<<" ";
    }
    // cout<<endl;
    if(sum==7){
      cout<<a;
      rep(i,3){
        int d=1<<i;
        if((bit&d)!=0) cout<<"+";
        else cout<<"-";
        cout<<b[i];
      }
      cout<<"=7"<<endl;
      return 0;
    }
  }

  return 0;
}
