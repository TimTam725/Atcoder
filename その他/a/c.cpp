#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,string> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const int INF=1000000001;
const double PI=3.141592653589;
const ll LMAX=1000000000000001;


int main(){
  int n,m; cin>>n>>m;

  vector<P> p(m);

  rep(i,m) cin>>p[i].fs>>p[i].sc;
  vector<int> w(n,0);
  set<int> se;

  int AC=0;
  int WA=0;

  rep(i,m){

    if(se.count(p[i].fs)) continue;
    else{
      if(p[i].sc=="AC"){
        // ac=1;
        se.insert(p[i].fs);
      }else if(p[i].sc=="WA"){
        w[p[i].fs-1]++;
        // cout<<"a"<<endl;
      }
    }
  }
  rep(i,n){
    if(se.count(i+1)){
      WA+=w[i];
    }
  }
  // if(ac){
  //   AC++;
  //   WA+=wa;
  // }
  cout<<se.size()<<" "<<WA<<endl;

  return 0;
}
