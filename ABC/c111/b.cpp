#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const int INF=10000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  int ans;
  for(int i=100;i<1000;i++){
    int a=i/100;
    int b=(i%100)/10;
    int c=i%10;
    if(i>=n&&(a==b&&b==c)){
      ans=i;
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
