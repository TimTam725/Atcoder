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
  int k; cin>>k;
  if(k%2==0){
    cout<<(k/2)*(k/2)<<endl;
  }else{
    cout<<((k+1)/2)*(k/2)<<endl;
  }

  return 0;
}
