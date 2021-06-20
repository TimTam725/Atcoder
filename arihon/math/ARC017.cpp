#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;

bool pf(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}

int main(){
  int n;cin>>n;

  bool c=pf(n);
  cout<<(c?"YES":"NO")<<endl;
  return 0;
}
