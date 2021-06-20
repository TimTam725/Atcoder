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

int waru(int a){
  int c=0;
  while(a%2==0){
    c++;
    a/=2;
  }
  return c;
}

int main(){
  int n; cin>>n;
  int ans=0;

  rep(i,n){
    int a; cin>>a;
    if(a%2==0){
      int g=waru(a);
      // cout<<"a "<<a<<" g "<<g<<endl;
      ans+=g;
    }
  }

  cout<<ans<<endl;


  return 0;
}
