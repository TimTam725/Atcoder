#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<int> p(n);
  rep(i,n){
    cin>>p[i];
  }

  int c=0;
  for(int i=1;i<n-1;i++){
    if((p[i-1]<p[i]&&p[i]<p[i+1])||(p[i-1]>p[i]&&p[i]>p[i+1]))
    c++;
  }
  cout<<c<<endl;
  return 0;
}
