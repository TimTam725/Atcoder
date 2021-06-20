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


int main(){
  int n,m; cin>>n>>m;
  set<int> s;
  vector<P> a(m);
  bool c=0;
  rep(i,m) cin>>a[i].fs>>a[i].sc;
  
  sort(ALL(a));
  rep(i,m){
    if(a[i].fs==1)
    s.insert(a[i].sc);
    else if(a[i].sc==n){
      if(s.count(a[i].fs)){
        puts("POSSIBLE");
        return 0;
      }
    }
  }

  puts("IMPOSSIBLE");

  return 0;
}
