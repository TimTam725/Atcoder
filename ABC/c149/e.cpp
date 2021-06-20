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
const int INF=1000000001;
const double PI=3.141592653589;
const ll mod=1000000007;

int main(){
  int n,k,r,s,p; cin>>n>>k>>r>>s>>p;
  string t; cin>>t;
  int id=0;
  ll ans=0;
  vector<bool> f(n,0);
  rep(i,n){
    if(i<k){
      if(t[i]=='r'){
        ans+=p;
        f[i]=1;
      }
      else if(t[i]=='s'){
        ans+=r;
        f[i]=1;
      }
      else{
        ans+=s;
        f[i]=1;
      }
    }else{
      if(t[i]=='r'){
        if(t[id]!='r'){
          ans+=p;
          f[i]=1;
        }
        else if(t[id]=='r'&&!(f[id])){
          ans+=p;
          f[i]=1;
        }
      }
      else if(t[i]=='s'){
        if(t[id]!='s'){
          ans+=r;
          f[i]=1;
        }
        else if(t[id]=='s'&&!(f[id])){
          ans+=r;
          f[i]=1;
        }
      }
      else{
        if(t[id]!='p'){
          ans+=s;
          f[i]=1;
        }
        else if(t[id]=='p'&&!(f[id])){
          f[i]=1;
          ans+=s;
        }
      }
      id++;
    }
  }
  cout<<ans<<endl;

  return 0;
}
