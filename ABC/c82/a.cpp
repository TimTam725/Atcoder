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
  int a,b; cin>>a>>b;
  if((a+b)%2==0)
  cout<<(a+b)/2<<endl;
  else
  cout<<(a+b)/2+1<<endl;


  return 0;
}
