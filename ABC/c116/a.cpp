#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

int main(){
  int a,b,c; cin>>a>>b>>c;
  if(a>max(b,c)){
    cout<<b*c/2<<endl;
  }else if(b>max(a,c)){
    cout<<a*c/2<<endl;
  }else{
    cout<<a*b/2<<endl;
  }
  return 0;
}
