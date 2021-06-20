#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n;
  cin>>n;

  double bun=n;
  if(n%2!=0)
  bun+=1;

  // cout<<setprecision(10)<<bun<<endl;

  // cout<<fixed<<setprecision(10)<<bun/2<<" "<<(double)n<<endl;
  double ans=(bun/2)/(double)n;
  cout<<fixed<<setprecision(10)<<ans<<endl;


}
