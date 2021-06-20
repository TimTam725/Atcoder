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
  vector<int> a(n);
  int sum=0;
  rep(i,n){
    cin>>a[i];
    if(i==0)
    sum+=abs(a[i]);
    else
    sum+=abs(a[i]-a[i-1]);
  }
  sum+=abs(a[n-1]);

  rep(i,n){
    int s=sum;
    if(i==0){
      s+=-(abs(a[i])+abs(a[i]-a[i+1]))+abs(a[i+1]);
    }else if(i==n-1){
      s+=-(abs(a[i])+abs(a[i]-a[i-1]))+abs(a[i-1]);
    }else{
      s+=-(abs(a[i]-a[i-1])+abs(a[i+1]-a[i]))+abs(a[i+1]-a[i-1]);
    }
    cout<<s<<endl;
  }


  return 0;

}
