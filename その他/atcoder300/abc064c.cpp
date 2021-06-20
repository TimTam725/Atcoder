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
  vector<int> k(9,0);
  rep(i,n){
    int a; cin>>a;
    if(a<400) k[0]++;
    else if(a<800) k[1]++;
    else if(a<1200) k[2]++;
    else if(a<1600) k[3]++;
    else if(a<2000) k[4]++;
    else if(a<2400) k[5]++;
    else if(a<2800) k[6]++;
    else if(a<3200) k[7]++;
    else k[8]++;
  }
  int m=0;
  rep(i,8){
    if(k[i]!=0) m++;
  }
  // if(m==0) cout<<1<<" ";
  // else cout<<m<<" ";
  // if(m+k[8]>8) cout<<8<<endl;
  // else cout<<m+k[8]<<endl;
  int d=max(m,1);
   m+=k[8];
   cout<<d<<" "<<m<<endl;

  return 0;
}
