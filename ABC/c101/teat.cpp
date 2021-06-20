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
  // cout<<"und "<<und<<" up "<<up<<endl;
  int ans=1000000009;
  int U=und;
  while(up>=0&&und<U+k){
    int aa=0;
    if(und%(k-1)==0)
    aa=und/(k-1);
    else
    aa=und/(k-1)+1;
    // cout<<ans<<endl;
    if(up%(k-1)==0)
    aa+=up/(k-1);
    else
    aa+=up/(k-1)+1;

    // cout<<aa<<endl;
    ans=min(ans,aa);
    und++;
    up--;
  }

  cout<<ans<<endl;


  return 0;
}
