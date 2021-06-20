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
  int x; cin>>x;
  int ans=1;
  if(x>1){
    for(int i=2;i<x;i++){
      int a=i;
      while(a<=x){
        a*=i;
      }
      a/=i;
      if(a!=i)
      ans=max(ans,a);
    }
  }
  cout<<ans<<endl;
  return 0;
}
