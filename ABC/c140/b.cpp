#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
    int n;cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n-1);
  int ans=0;

  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    cin>>b[i];
    ans+=b[i];
  }
  rep(i,n-1){
    cin>>c[i];
  }
   rep(i,n-1){
     if(a[i]+1==a[i+1]){
       ans+=c[a[i]-1];
     }
     // cout<<"ans "<<ans<<endl;
   }
   cout<<ans<<endl;

  return 0;
}
