#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int a,b,ans; cin>>a>>b;
  if(1<=a&&a<=9&&b<=9&&1<=b){
    ans=a*b;
  }else{
    ans=-1;
  }

  cout<<ans<<endl;
  return 0;
}
