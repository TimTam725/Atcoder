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
  vector<int> a(3);
  rep(i,3) cin>>a[i];
  int ans=0;
  sort(ALL(a));
  ans+=a[2]-a[1];
  if((a[1]-a[0])%2==0)
  ans+=(a[1]-a[0])/2;
  else
  ans+=(a[1]-a[0])/2+2;

  cout<<ans<<endl;

  return 0;

}
