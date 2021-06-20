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
  string s; cin>>s;
  int size=s.size()-2;
  string ans;
  ans+=s[0];
  if(size<10){
    char c=size+'0';
    ans+=c;
    ans+=s[size+1];
  }else{
    ans+=size/10+'0';
    ans+=size%10+'0';
    ans+=s[size+1];
  }
  cout<<ans<<endl;

  return 0;
}
