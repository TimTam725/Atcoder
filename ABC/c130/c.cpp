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
  double w,h,x,y; cin>>w>>h>>x>>y;
  double jx=w/2;
  double jy=h/2;
  cout<<fixed<<setprecision(6)<<h*w/2<<" "<<((jx==x&&jy==y)?"1":"0")<<endl;


  return 0;
}
