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
  int a,b,c; cin>>a>>b>>c;
  int k; cin>>k;
  int ans=0;
  rep(i,k){
    if(a>max(b,c)){
      a*=2;
    }else if(b>max(a,c)){
      b*=2;
    }else{
      c*=2;
    }
  }
  cout<<a+b+c<<endl;

}
