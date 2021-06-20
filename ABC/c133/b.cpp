#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef pair<int,int> pl;
const int INF=100000001;

bool is_integer( double x ){
  return floor(x)==x;
}

int main(){
  int n,d; cin>>n>>d;
  vector<vector<int>> x(n,vector<int>(d));
  rep(i,n){
    rep(j,d){
      int a; cin>>a;
      x[i][j]=a;
    }
  }
  int c=0;

  rep(i,n-1){
    for(int k=i+1;k<n;k++){
      int sum=0;
      // cout<<"i "<<i<<" k "<<k<<endl;
      rep(j,d){
        sum+=(x[i][j]-x[k][j])*(x[i][j]-x[k][j]);
      }
      double s=sqrt(sum);
      // cout<<s<<endl;
      bool che=is_integer(s);
      if(che)
      c++;
    }
  }
  cout<<c<<endl;
  return 0;
}
