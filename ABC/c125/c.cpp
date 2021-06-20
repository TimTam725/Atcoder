#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;

// int right[100005];

int gcd(int a,int b){
  if(a<b)swap(a,b);
  int c=a%b;
  // cout<<c<<endl;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

int main(){
  int n; cin>>n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  vector<int> left(n);
  vector<int> right(n);

  left[0]=a[0];
  for(int i=0;i<n-1;i++){
    left[i+1]=gcd(a[i+1],left[i]);
  }
  right[n-1]=a[n-1];
  for(int i=n-1;0<i;i--){
    right[i-1]=gcd(a[i-1],right[i]);
  }
  int ans=-1;
  rep(i,n){
    if(i==0)
    ans=max(ans,right[i+1]);
    else if(i==n-1)
    ans=max(ans,left[i-1]);
    else
    ans=max(ans,gcd(right[i+1],left[i-1]));
  }
  cout<<ans<<endl;
  return 0;
}
