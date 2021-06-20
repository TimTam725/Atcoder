#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n;cin>>n;
  bool ans=0;

  for(int i=1;i<=n/2;i++){
    if(n%i==0){
        int a=n/i;
        if(a<=9&&i<=9&&1<=a){
        ans=1;
        // cout<<i<<endl;
      }
    }
  }
  if(n==1)
  ans=1;

  if(ans){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
