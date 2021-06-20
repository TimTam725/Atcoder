#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> P;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  int a=(s[0]-'0')*10+(s[1]-'0');
  int b=(s[2]-'0')*10+(s[3]-'0');
  if(a>12||a==0){
    if(b>12||b==0)
    cout<<"NA"<<endl;
    else
    cout<<"YYMM"<<endl;
  }else{
    if(b>12||b==0)
    cout<<"MMYY"<<endl;
    else
    cout<<"AMBIGUOUS"<<endl;
  }

  return 0;
}
