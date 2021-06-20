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
const ll LMAX=1000000000000001;


int main(){
  int n,k,m; cin>>n>>k>>m;
  int sum=0;
  rep(i,n-1){
    int a; cin>>a;
    sum+=a;
  }
  sum=m*n-sum;
  if(sum>k)
  cout<<-1<<endl;
  else if(sum>0)
  cout<<sum<<endl;
  else
  cout<<0<<endl;


  return 0;
}
