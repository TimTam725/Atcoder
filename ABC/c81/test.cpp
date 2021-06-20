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
  int n,k; cin>>n>>k;
  vector<int> a(n);
  rep(i,n){
    int A; cin>>A;
    A--;
    if(a[A].size()==0)
    a[A]=1;
    else
    a[A]++;
  }
  sort(ALL(a));
  for(int i=n-1;0<=i;i--){
    if(a[n-1-i])
  }


  return 0;
}
