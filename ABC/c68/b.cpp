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

int count(int a,int c){
    if(a%2==0)
    return count(a/2,c+1);
    else
    return c;
}

int main(){
  int n; cin>>n;
  int num=1;
  int c=0;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      int d=count(i,0);
      if(d>c){
        num=i;
        c=d;
      }
    }
  }
  cout<<num<<endl;

  return 0;
}
