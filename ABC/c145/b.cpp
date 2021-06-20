#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const int INF=10010010;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;
  string s;cin>>s;
  bool ans=0;
  if(n%2!=0){
    ans=0;
  }else{
    string s1=s.substr(0,n/2);
    string s2=s.substr(n/2,n/2);
    // cout<<s1<<" "<<s2<<endl;
    if(s1==s2)
    ans=1;
  }
  cout<<(ans?"Yes":"No")<<endl;

return 0;
}
