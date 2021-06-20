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
  string s; cin>>s;
  int a,b;
  rep(i,s.size()){
    if(s[i]=='A'){
      a=i;break;
    }
  }
  rep(i,s.size()){
    if(s[s.size()-1-i]=='Z'){
      b=s.size()-1-i;break;
    }
  }
  // string ans=s.substr(i,b-i+1);
  cout<<b-a+1<<endl;

  return 0;
}
