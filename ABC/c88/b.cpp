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
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  sort(ALL(a));
  int A=0;
  int B=0;
  bool c=0;
  for(int i=n-1;i>=0;i--){
    if(!(c)){
      A+=a[i];
      c=1;
    }else{
      B+=a[i];
      c=0;
    }
  }
  A=abs(A-B);
  cout<<A<<endl;

  return 0;

}
