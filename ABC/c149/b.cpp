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
const ll mod=1000000007;

int main(){
  ll a,b,k; cin>>a>>b>>k;
  if(k<=a)
  cout<<a-k<<" "<<b<<endl;
  else if(k-a<b)
  cout<<0<<" "<<b-(k-a)<<endl;
  else
  cout<<0<<" "<<0<<endl;

  return 0;
}