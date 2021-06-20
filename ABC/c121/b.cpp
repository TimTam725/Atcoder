#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int N,M,C; cin>>N>>M>>C;
  vector<int> b(M);
  rep(i,M) cin>>b[i];

  vector<int> a(M);
  int ans=0;

  rep(i,N){
    int c=C;
    rep(j,M){
      cin>>a[j];
      c+=a[j]*b[j];
    }
    if(0<c)
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}
