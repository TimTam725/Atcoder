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
  // int y=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
  int m=(s[5]-'0')*10+(s[6]-'0');
  int d=(s[8]-'0')*10+(s[9]-'0');
  if(m<=4&&d<=30)
  cout<<"Heisei"<<endl;
  else
  cout<<"TBD"<<endl;

  return 0;
}
