#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;

int main(){
  int p,q,r; cin>>p>>q>>r;

  int m=max(p,q);
  m=max(m,r);
  m=p+q+r-m;
  cout<<m<<endl;
}
