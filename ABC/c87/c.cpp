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
  int n; cin>>n;
  vector<vector<int>> a(2,vector<int>(n));
  // vector<vector<int>> c(2,vector<int>(n));
  rep(j,2){
    rep(i,n){
      int A; cin>>A;
      if(j==0){
        if(i==0)
        a[j][i]=A;
        else
        a[j][i]=a[j][i-1]+A;
      }else{
        if(i==0)
        a[j][i]=a[j-1][i]+A;
        else
        a[j][i]=max(a[j-1][i],a[j][i-1])+A;
      }
    }
  }
  cout<<a[1][n-1]<<endl;
  return 0;
}
