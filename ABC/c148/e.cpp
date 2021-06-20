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


int main(){
  ll n; cin>>n;
  ll i=5;
  ll c=0;
  if(n%2==0){
    while(i<=n){
      c+=(n/i)/2;
      if(n%2!=0&&(n/i)%2!=0)
      c++;
      i*=5;
    }
  }else
  c=0;
  cout<<c<<endl;

  return 0;
}
