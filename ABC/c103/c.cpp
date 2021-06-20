#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  int ans=0;
  rep(i,n){
    int a; cin>>a;
    ans+=a-1;
  }
  cout<<ans<<endl;

  return 0;
}
