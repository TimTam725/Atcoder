#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

int main(){
  int n;
  cin>>n;

  vector<double> v(n);
  int i;
  for(i=0;i<n;i++)
  cin>>v[i];

  sort(v.begin(),v.end());
  double ans=(v[0]+v[1])/2;
  for(i=2;i<n;i++){
    ans=(ans+v[i])/2;
  }
  cout<<ans<<endl;

}
