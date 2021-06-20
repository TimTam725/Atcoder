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
  int a,b,t; cin>>a>>b>>t;
  int ans=0;
  int i=0;
  while(i+a<=t){
    ans+=b;
    i+=a;
  }
  cout<<ans<<endl;
}
