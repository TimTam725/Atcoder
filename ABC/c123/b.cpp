#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  vector<int> a(5);
  rep(i,5) cin>>a[i];
  sort(a.begin(),a.end());
  // ☆昇順の配列の階上を全列挙
  int ans=100000009;
  do{
    int t=0;
    rep(i,5){
      t+=a[i];
      if(i!=4&&t%10!=0)
      t+=(10-a[i]%10);
    }
    ans=min(ans,t);
  }while(next_permutation(a.begin(),a.end()));

  cout<<ans<<endl;

  return 0;
}
