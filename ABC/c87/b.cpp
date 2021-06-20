#include<bits/stdc++.h>
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
  int a,b,c,x; cin>>a>>b>>c>>x;
  int ans=0;
  rep(i,a+1){
    rep(j,b+1){
      rep(k,c+1){
        if(500*i+100*j+50*k==x)
        ans++;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
