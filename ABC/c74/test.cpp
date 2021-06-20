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
  double e;
  int a,b,c,d,f; cin>>a>>b>>c>>d>>e>>f;
  double N=-1;
  a*=100; b*=100;
  int ans1,ans2;

  for(int i=0;i<=f;i+=a){
    for(int j=0;i+j<=f;j+=b){
      for(int k=0;i+j+k<=f;k+=c){
        for(int l=0;i+j+k+l<=f;l+=d){
          if(i==0&&j==0) continue;
          double I=i;
          double J=j;
          double K=k;
          double L=l;
          double E=(K+L)/(I/100+J/100);
          // cout<<"E "<<E<<endl;
          if(E>e) continue;
          double nodo=100*(K+L)/(K+L+I+J);
          if(nodo>N){
            // cout<<"nodo "<<nodo<<endl;
            N=nodo;
            ans1=k+l+i+j;
            ans2=k+l;
          }
        }
      }
    }
  }
  cout<<ans1<<" "<<ans2<<endl;

  return 0;
}
