#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

int main(){
  int n; cin>>n;
  vector<int> a(n+1);
  vector<int> b(n+1);
  for(int i=1;i<n+1;i++) cin>>a[i];

  int m=0;
  for(int i=n;i>0;i--){
    int sum=0;
    int j=2;
    while(i*j<=n){
      if(b[i*j]==1)
      sum++;
      j++;
    }
    if(sum%2==0){
      if(a[i]==1){
        b[i]++;
        m++;
      }
    }else{
      if(a[i]==0){
        b[i]++;
        m++;
      }
    }
  }
  cout<<m<<endl;
  for(int i=1;i<=n;i++){
    if(b[i]==1)
    cout<<i<<(i==n?"\n":" ");
  }
  return 0;
}
