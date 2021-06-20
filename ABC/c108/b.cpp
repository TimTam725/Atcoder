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
  int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
  int x3,y3,x4,y4;
  int x=x2-x1;
  int y=y2-y1;
  x3=x2-y;
  y3=y2+x;
  x4=x1-y;
  y4=y1+x;
  cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;


  return 0;
}
