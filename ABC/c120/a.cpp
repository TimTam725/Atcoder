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
  int a,b,c; cin>>a>>b>>c;

  int ans=b/a;
  if(ans>c){
    cout<<c<<endl;
  }else{
    cout<<ans<<endl;
  }
  return 0;
}
