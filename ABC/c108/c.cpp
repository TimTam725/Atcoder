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
  int n,k; cin>>n>>k;

  if(k%2==1){
    ll a=n/k;
    cout<<a*a*a<<endl;
  }else{
    ll a=n/(k/2);
    ll b=n/k;
    a-=b;
    cout<<a*a*a+b*b*b<<endl;
  }

  return 0;
}
