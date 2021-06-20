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
  vector<vector<int>> c(3,vector<int>(3));
  vector<int> a(3,0);
  vector<int> b(3);
  rep(i,3){
    rep(j,3){
      cin>>c[i][j];
      if(i==0)
      b[j]=c[i][j];
      if(j==0)
      a[i]=c[i][j]-b[j];
    }
  }
  bool ans=1;
  // rep(i,3){
  //   cout<<a[i]<<" "<<b[i]<<endl;
  // }
  rep(i,3){
    rep(j,3){
      if(a[i]+b[j]!=c[i][j])
      ans=0;
    }
  }

  if(ans)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;

}
