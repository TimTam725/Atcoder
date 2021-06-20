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
const ll mod=1000000007;

int main(){
  int n; cin>>n;
  vector<int> a(8,0);
  int k=0;
  rep(i,n){
    int A; cin>>A;
    if(A<400) a[0]++;
    else if(A<800) a[1]++;
    else if(A<1200) a[2]++;
    else if(A<1600) a[3]++;
    else if(A<2000) a[4]++;
    else if(A<2400) a[5]++;
    else if(A<2800) a[6]++;
    else if(A<3200) a[7]++;
    else k++;
  }
  // sort(ALL(a));
  int c=0;
  rep(i,8){
    if(a[i]!=0)
    c++;
  }

  if(c==0)
  cout<<1<<" ";
  else
  cout<<c<<" ";

  cout<<c+k<<endl;


  return 0;
}
