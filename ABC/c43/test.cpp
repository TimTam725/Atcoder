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
const double PI=3.141592653589;
const int INF=1000000007;
const ll LMAX=1000000000000001;
const ll mod=1000000007;
ll gcd(ll a,ll b){if(a<b)swap(a,b);while((a%b)!=0){a=b;b=a%b;}return b;}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(){
  string s; cin>>s;
  bool df=0;
  bool F=1;
  reverse(ALL(s));
  // cout<<s<<endl;
  rep(i,s.size()){
    if(i+5>=s.size()){
      F=0;break;
    }
    string c=s.substr(i,5);
    string cc=s.substr(i,6);
    // cout<<c<<" "<<cc<<endl;
    if(c=="maerd"||c=="esare")
    i+=4;
    else if(cc=="remaerd"||cc=="resare")
    i+=5;
    else{
      F=0;break;
    }
  }

  if(F)
  puts("YES");
  else
  puts("NO");

  return 0;
}
