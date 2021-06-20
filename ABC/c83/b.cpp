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

int sum(int a){
  int c=0;
  while(a>=10){
    c+=a%10;
    a/=10;
  }
  c+=a;
  return c;
}

int main(){
  int n,a,b; cin>>n>>a>>b;
  int ans=0;
  for(int i=1;i<=n;i++){
    int s=sum(i);
    if(a<=s&&s<=b)
    ans+=i;
  }
  cout<<ans<<endl;

  return 0;
}
