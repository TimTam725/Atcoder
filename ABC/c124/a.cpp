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
  int a,b; cin>>a>>b;
  if(a>b){
    cout<<a+a-1<<endl;
  }else if(b>a){
    cout<<b+b-1<<endl;
  }else{
    cout<<a*2<<endl;
  }
  return 0;
}
