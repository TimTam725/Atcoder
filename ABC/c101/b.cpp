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
  string n; cin>>n;
  ll num=0;
  int sn=0;
  rep(i,n.size()){
    num*=10;
    num+=n[i]-'0';
    sn+=n[i]-'0';
  }
  if(num%sn==0)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

  return 0;
}
