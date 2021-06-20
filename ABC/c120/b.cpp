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
  int a,b,k; cin>>a>>b>>k;
  int c=0;
  int am;
  if(a>b){
    for(int i=b;i>=0;i--){
      if(a%i==0&&b%i==0){
        c++;
      }
      if(c==k){
        am=i;
        break;
      }
    }
  }else{
    for(int i=a;i>=0;i--){
      if(a%i==0&&b%i==0){
        c++;
      }
      if(c==k){
        am=i;
        break;
      }
    }
  }
  cout<<am<<endl;
  return 0;
}
