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
  string s; cin>>s;
  int q; cin>>q;
  deque<char> dq;
  rep(i,s.size()) dq.pb(s[i]);
  bool k=1;
  rep(i,q){
    int t; cin>>t;
    if(t==1){
      if(k) k=0;
      else k=1;
    }else{
      int f; cin>>f;
      char c; cin>>c;
      if(f==1){
        if(k) dq.push_front(c);
        else dq.pb(c);
      }else{
        if(!(k)) dq.push_front(c);
        else dq.pb(c);
      }
    }
  }
  if(k){
    while(!(dq.empty())){
      cout<<dq.front();
      dq.pop_front();
    }
    cout<<endl;
  }else{
    while(!(dq.empty())){
      cout<<dq.back();
      dq.pop_back();
    }
    cout<<endl;
  }

  return 0;
}
