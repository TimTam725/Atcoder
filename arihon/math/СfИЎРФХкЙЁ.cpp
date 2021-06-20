#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;

ll gcd(ll a,ll b){
  if(a<b)swap(a,b);
  ll c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}

vector<ll> soinsu(ll n){
  vector<ll> a;
  for(ll i=2;i*i<=n;i++){
    if(n%i)continue;
    a.push_back(i);
    while(n%i==0){
      n/=i;
    }
  }
  if(n!=1)a.push_back(n);
  return a;
}



int main(){
  ll a,b;
  cin>>a>>b;

  ll c=gcd(a,b);
  auto f=soinsu(c);

  cout<<f.size()+1<<endl;

}
