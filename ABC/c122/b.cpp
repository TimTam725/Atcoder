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
  int length=0;
  int index=0;
  rep(i,s.size()){
    if(s[i]!='A'&&s[i]!='T'&&s[i]!='G'&&s[i]!='C')
    continue;
    int end=0;
    for(int j=i;j<s.size();j++){
      if(s[j]!='A'&&s[j]!='T'&&s[j]!='G'&&s[j]!='C')
      break;
      end=j;
    }
      // cout<<i<<" "<<end<<endl;
    if(length<end-i+1){
      length=end-i+1;
      index=i;
    }
  }
  // if(s.size()==1&&(s[0]=='A'||s[0]=='T'||s[0]=='G'||s[0]=='C'))
  // length=1;
  cout<<length<<endl;
  return 0;
}
