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
  int n; cin>>n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];

  sort(ALL(a),greater<int>());
  ll A=0;
  ll B=0;
  bool c=1;
  rep(i,n-1){
    if(a[i]==a[i+1]&&c){
      A=a[i];
      i++;c=0;
    }
    else if(a[i]==a[i+1]&&!(c)){
      B=a[i];
      break;
    }
  }
  cout<<A*B<<endl;

  return 0;
}
