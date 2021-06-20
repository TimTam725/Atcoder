#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n;cin>>n;
  ll ans=0;
  int c=INF;
  rep(i,n-1){
    int b;cin>>b;
    if(c>=b)
    ans+=b;
    else
    ans+=c;
    c=b;
    if(i==n-2)
    ans+=b;
  }
  cout<<ans<<endl;

  return 0;
}
