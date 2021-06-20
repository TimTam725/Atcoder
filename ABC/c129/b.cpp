#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;

int zet(int a){
  if(a<0)
  a=-a;
  return a;
}

int main(){
  int n; cin>>n;
  vector<int> w(n);
  int s1=0;
  int s2=0;
  rep(i,n){
    cin>>w[i];
    s2+=w[i];
  }

  int ans=zet(s1-s2);

  rep(i,n){
    s1+=w[i];
    s2-=w[i];
    int z=zet(s1-s2);
    ans=min(ans,z);
  }
  cout<<ans<<endl;

}
