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
  int n; cin>>n;
  vector<ll> l(n+1);
  l[0]=2; l[1]=1;
  for(int i=2;i<n+1;i++){
    l[i]=l[i-1]+l[i-2];
  }
  cout<<l[n]<<endl;

  return 0;
}
