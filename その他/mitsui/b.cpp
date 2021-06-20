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
  double n; cin>>n;
  double l=n/1.08;
  double r=(n+1)/1.08;
  // cout<<l<<" "<<r<<endl;
  int nn=n;
  int cl=ceil(l);
  // cout<<nn<<" "<<cl<<endl;
  if(nn==cl*108/100){
    cout<<cl<<endl;
  }else{
    // cout<<ceil(l)<<endl;
    cout<<":("<<endl;
  }

  return 0;
}
