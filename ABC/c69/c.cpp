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
  int c1=0;
  int c2=0;
  rep(i,n){
    int a; cin>>a;
    if(a%4==0)
    c1++;
    else if(a%2==0)
    c2++;
  }
  if(n-c1*2<=c2||n-c1*2==1)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
