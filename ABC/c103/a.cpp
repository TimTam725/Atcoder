#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  vector<int> a(3);
  rep(i,3) cin>>a[i];
  sort(a.begin(),a.end());
  int sum=0;
  sum+=a[1]-a[0];
  sum+=a[2]-a[1];
  cout<<sum<<endl;

  return 0;
}
