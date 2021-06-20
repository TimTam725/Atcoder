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
  vector<int> a(5);
  rep(i,5) cin>>a[i];
  int k; cin>>k;

  bool ans=1;
  rep(i,4){
    for(int j=i+1;j<5;j++){
      int d=a[i]-a[j];
      // cout<<d<<endl;
      if(d<-k||k<d)
      ans=0;
    }
  }
  cout<<(ans?"Yay!":":(")<<endl;

  return 0;
}
