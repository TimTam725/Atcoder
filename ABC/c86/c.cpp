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
  vector<int> t(n);
  vector<int> x(n);
  vector<int> y(n);
  rep(i,n){
    cin>>t[i]>>x[i]>>y[i];
  }
  rep(i,n){
    int l;
    if(i==0){
      l=x[i]+y[i];
      if(l<=t[i]){
        if((t[i]-l)%2!=0){
          cout<<"No"<<endl;
          return 0;
        }
      }else{
        cout<<"No"<<endl;
        return 0;
      }
    }else{
      l=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
      if(l<=t[i]-t[i-1]){
        if((t[i]-t[i-1]-l)%2!=0){
          cout<<"No"<<endl;
          return 0;
        }
      }else{
        cout<<"No"<<endl;
        return 0;
      }
    }
  }
  cout<<"Yes"<<endl;

  return 0;
}
