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
  vector<int> x(n);
  vector<int> y(n);
  rep(i,n){
    cin>>x[i];
    y[i]=x[i];
  }
  sort(ALL(x));

  int t1=x[n/2];
  int t2=x[n/2-1];
  rep(i,n){
    if(y[i]<t1){
      cout<<t1<<endl;
    }else{
      cout<<t2<<endl;
    }
  }


  return 0;

}
