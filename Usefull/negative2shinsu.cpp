#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=1000000000000001;
const double PI=3.141592653589;


int main(){
  int n; cin>>n;

  if(n==0){
    cout<<0<<endl;
  }else{
    string s;
    while(n!=1){
      if(n>0){
        if(n%2==0){
          s.push_back('0');
          n/=-2;
        }else{
          s.push_back('1');
          n=(n-1)/-2;
        }
      }else{
        if(-n%2==0){
          s.push_back('0');
          n/=-2;
        }else{
          s.push_back('1');
          n=(n-1)/-2;
        }
      }
      // cout<<n<<endl;
    }
    s.push_back('1');
    // cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

  }

  return 0;
}
