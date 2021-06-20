#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;

int count(int a){
  int c=0;
  for(int i=1;i<=a;i++){
    if(a%i==0)
    c++;
  }
   return c;
}

int main(){
  int n; cin>>n;

  int ans=0;
  for(int i=1;i<=n;i++){
    if(i%2==1){
      if(count(i)==8)
      ans++;
    }
  }
  cout<<ans<<endl;

  return 0;
}
