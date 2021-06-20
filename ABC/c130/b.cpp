#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;


int main(){
  int x,n; cin>>n>>x;
  int c=1;
  int sum=0;
  vector<int> l(n);
  rep(i,n){
    cin>>l[i];
  }
  for(int i=1;i<=n;i++){
    sum=sum+l[i-1];
    // cout<<sum<<endl;
    if(sum<=x)
    c++;
  }
  cout<<c<<endl;

  return 0;
}
