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
  int n,k; cin>>n>>k;
  int und;
  int up;
  rep(i,n){
    int a; cin>>a;
    if(a==1)
    und=i;
  }
  up=n-(und+1);
  int ans=0;
  if(und%(k-1)==0)
  ans+=und/(k-1);
  else
  ans+=und/(k-1)+1;
  if(up%(k-1)==0)
  ans+=up/(k-1);
  else
  ans+=up/(k-1)+1;

  cout<<ans<<endl;


  return 0;
}
