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

ll gcd(ll a,ll b){
  if(a<b)swap(a,b);
  ll c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

int main(){
  ll a,b; cin>>a>>b;
  ll c=gcd(a,b);
  c=a/c*b/c*c;
  cout<<c<<endl;

  return 0;
}
