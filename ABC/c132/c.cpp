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
  vector<int> d(n);
  rep(i,n){
    cin>>d[i];
  }

  sort(d.begin(),d.end());
  int k=d[n/2]-d[n/2-1];

  cout<<k<<endl;

  return 0;
}
