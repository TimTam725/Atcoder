#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n,i,j;cin>>n;
  string s;cin>>s;

  int ans=0;
  i=0;
  while(i<n){
    for(j=i;j<n;j++){
      if(s[i]!=s[j])
      break;
    }
    ans+=1;
    i=j;
    // cout<<"ans "<<ans<<" i "<<i<<endl;
  }

  cout<<ans<<endl;
  return 0;
}
