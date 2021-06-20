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
const ll LMAX=1000000000000001;


int main(){
  int n; cin>>n;
  vector<int> a(n);
  vector<int> p(n);
  vector<int> q(n);
  rep(i,n) cin>>p[i];
  rep(i,n) cin>>q[i];
  rep(i,n) a[i]=i+1;
  // ☆昇順の配列の階上を全列挙
  int A,B;
  int c=0;
  do{
    c++;
    bool f=1;
    rep(i,n){
      if(a[i]!=p[i]){
        f=0;
        break;
      }
    }
    if(f) A=c;
    f=1;
    rep(i,n){
      if(a[i]!=q[i]){
        f=0;
        break;
      }
    }
    if(f) B=c;
  }while(next_permutation(a.begin(),a.end()));

  A=abs(A-B);
  cout<<A<<endl;
  return 0;
}
