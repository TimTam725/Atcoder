#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// typedef long  l;
typedef pair<int,int> P;
const int INF=10000001;
const double PI=3.141592653589;



int main(){
  int n; cin>>n;
  vector<int> v(n);
  rep(i,n) cin>>v[i];
  map<int,int> m1;
  map<int,int> m2;
  for(int i=0;i<n;i+=2){
    m1[v[i]]++;
  }
  for(int i=1;i<n;i+=2){
    m2[v[i]]++;
  }

  P m1max1={0,0};
  P m1max2={0,0};
  P m2max1={0,0};
  P m2max2={0,0};
  for(auto itr=m1.begin();itr!=m1.end();itr++){
    int a=itr->first;
    int b=itr->second;
    if(b>m1max1.second)
    m1max1={a,b};
    else if(b>m1max2.second)
    m1max2={a,b};
  }
  for(auto itr=m2.begin();itr!=m2.end();itr++){
    int a=itr->first;
    int b=itr->second;
    if(b>m2max1.second)
    m2max1={a,b};
    else if(b>m2max2.second)
    m2max2={a,b};
  }

  if(m1max1.first!=m2max1.first){
    cout<<n-m1max1.second-m2max1.second<<endl;
  }else{
    int a=m1max1.second;
    int b=m1max2.second;
    int c=m2max1.second;
    int d=m2max2.second;
    int ans;
    if(b==0&&d==0)
    ans=n/2;
    else if(b==0)
    ans=n/2-d;
    else if(d==0)
    ans=n/2-b;
    else
    ans=n-max(a+d,b+c);
    cout<<ans<<endl;
  }


  return 0;
}
