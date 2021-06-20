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
    int ans=0;
    if(s=="SUN")
    ans=7;
    else if(s=="MON")
    ans=6;
    else if(s=="TUE")
    ans=5;
    else if(s=="WED")
    ans=4;
    else if(s=="THU")
    ans=3;
    else if(s=="FRI")
    ans=2;
    else if(s=="SAT")
    ans=1;

    cout<<ans<<endl;
    return 0;
  }
