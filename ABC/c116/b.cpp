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
  int s; cin>>s;
  set<int> se;
  se.insert(s);
  int i=2;
  while(1){
    if(s%2==0){
      s/=2;
    }else{
      s=s*3+1;
    }
    if(se.count(s)){
      break;
    }
    i++;
    se.insert(s);
  }
  cout<<i<<endl;
  return 0;
}
