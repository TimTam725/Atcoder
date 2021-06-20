#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;

int kai(int n){
  int ans=1;
  rep(i,n)
  ans*=i+1;
  return ans;
}

int main(){
  int n; cin>>n;
  vector<P> z(n);
  rep(i,n) cin>>z[i].first>>z[i].second;
  sort(z.begin(),z.end());

  double sum=0;
  do{
    // cout<<"sento"<<endl<<z[0].first<<" "<<z[0].second<<endl;
    rep(i,n-1){
      double x2=(z[i].first-z[i+1].first)*(z[i].first-z[i+1].first);
      double y2=(z[i].second-z[i+1].second)*(z[i].second-z[i+1].second);
      sum+=sqrt(x2+y2);
      // cout<<z[i].first<<"⇒"<<z[i+1].first<<" "<<z[i].second<<"⇒"<<z[i+1].second<<endl;
    }
  }while(next_permutation(z.begin(),z.end()));
  sum/=kai(n);
  cout<<fixed<<setprecision(6)<<sum<<endl;
  return 0;
}
