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

int keta(int n){
  int c=0;
  while(n>=10){
    c+=n%10;
    n/=10;
  }
  c+=n;
  return c;
}

int main(){
  int n; cin>>n;
  int f=keta(n);
  if(n%f==0)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
