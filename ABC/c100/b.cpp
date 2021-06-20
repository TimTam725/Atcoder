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
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int d,n; cin>>d>>n;
  if(d==0){
    if(n==100)
    n+=1;
    cout<<n<<endl;
  }else if(d==1){
    int ans=n*100;
    if(n==100)
    ans+=100;
    cout<<ans<<endl;
  }else{
    int ans=n*10000;
    if(n==100)
    ans+=10000;
    cout<<ans<<endl;
  }

  return 0;
}
