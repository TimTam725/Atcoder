#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ALL(A) A.begin(),A.end()
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  vector<int> a(n);
  rep(i,n){
    int aa; cin>>aa;
    a[i]=aa-(i+1);
  }
  sort(ALL(a));

  // rep(i,n){
  //   cout<<a[i]<<" ";
  // }
  cout<<endl;
  ll ans=0;
  int b;
  if(n%2==1){
    b=a[n/2];
  }else{
    b=(a[n/2-1]+a[n/2])/2;
  }
  // cout<<b<<endl;
  rep(i,n){
    ans+=abs(a[i]-b);
  }
  cout<<ans<<endl;

  return 0;
}
