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
const int INF=1000000001;
const double PI=3.141592653589;

string kai(int a){
  string c;
  while(a>=10){
    c+=(a%10)+'0';
    a/=10;
  }
  // cout<<a<<endl;
  if(a!=0)
  c+=a+'0';
  return c;
}

int main(){
  ll n,m; cin>>n>>m;
  ll ans;
  if(n==1&&m==1){
    ans=1;
  }else if(m==1){
    ans=n-2;
  }else if(n==1){
    ans=m-2;
  }else{
    ans=n*m-(2*n+2*(m-2));
    // ans=(n-2)*(m-2);
  }
  cout<<ans<<endl;

  return 0;

}
