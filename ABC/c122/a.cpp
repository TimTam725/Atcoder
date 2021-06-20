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
  char b; cin>>b;
  char ans;
  if(b=='A')
  ans='T';
  else if(b=='T')
  ans='A';
  else if(b=='G')
  ans='C';
  else
  ans='G';
  cout<<ans<<endl;
  return 0;
}
