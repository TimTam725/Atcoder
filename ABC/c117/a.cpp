#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
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
  double t,x;cin>>t>>x;
  cout<<fixed<<setprecision(6)<<t/x<<endl;

  return 0;
}
