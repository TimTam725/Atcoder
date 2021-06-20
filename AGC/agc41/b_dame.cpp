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
  ll n,m,v,p; cin>>n>>m>>v>>p;
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  sort(ALL(a));

  ll ans=p-1;
  ll id1=n-p;
  ll id2;
  rep(i,n)
  cout<<a[i]<<" ";
  cout<<endl;
  if(v<=p){
    for(int i=id1;0<=i;i--){
      if(a[id1]<=a[i]+m)
      ans++;
    }
  }else{
    id2=v-p-1;
    for(int i=id1;0<=i;i--){
      if(id2<i){
        if(a[id1]<=a[i]+m)
        ans++;
        else
        break;
      }else if(id2==i){
        id2++;
        if(id1==id2) break;
        id1++;
        if(id1==n) break;
      }else{
        if(a[id1]<=a[i]+m)
        ans++;
        else
        break;
        id1++;
        if(id1==n) break;
      }
      // cout<<"i "<<i<<" id1 "<<id1<<" id2 "<<id2<<" ans "<<ans<<endl;
    }
  }
  cout<<ans<<endl;

  return 0;
}
