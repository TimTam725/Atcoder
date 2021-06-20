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
  vector<int> c(n-1);
  vector<int> s(n-1);
  vector<int> f(n-1);
  rep(i,n-1){
    cin>>c[i]>>s[i]>>f[i];
  }

  rep(i,n-1){
    int ans=0;
    // cout<<"i "<<i<<endl;
    for(int j=i;j<n-1;j++){
      if(s[j]>=ans){
        ans=s[j]+c[j];
      }else{
        int d=ans-s[j];
        if(ans%f[j]==0){
          ans+=c[j];
        }else{
          ans=s[j]+(d/f[j])*f[j]+f[j]+c[j];
        }
      }
      // cout<<"ans "<<ans<<endl;
    }
    cout<<ans<<endl;
  }
  cout<<0<<endl;

  return 0;
}
