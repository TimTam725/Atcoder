#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
typedef long  l;
typedef pair<int,int> pl;
const ll INF=100000000000000001;
const double PI=3.141592653589;


int main(){
  string s; cin>>s;
  sort(s.begin(),s.end());

  bool c=0;
  if(s[0]==s[1]&&s[1]!=s[2]&&s[2]==s[3])
  c=1;

  cout<<(c==1?"Yes":"No")<<endl;
  return 0;
}
