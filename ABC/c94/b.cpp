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


int main(){
  int n,m,x; cin>>n>>m>>x;
  x--;
  vector<bool> a(n+1);
  int ans1=0;
  int ans2=0;
  rep(i,m){
    int m; cin>>m;
    m--;
    if(m<x)
    ans1++;
    else
    ans2++;
  }
  ans1=min(ans1,ans2);
  cout<<ans1<<endl;

  return 0;

}
