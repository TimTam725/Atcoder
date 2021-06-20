#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int gcd(int a,int b){
  if(a<b)swap(a,b);
  int c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

int main(){
  int n,X; cin>>n>>X;
  vector<int> x(n);
  rep(i,n){
    int a; cin>>a;
    x[i]=abs(a-X);
  }
  int ans=x[0];
  rep(i,n){
    ans=gcd(x[i],ans);
  }
  cout<<ans<<endl;


  return 0;
}
