#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n;
  cin>>n;

  vector<int> a(n+1);
  vector<int> b(n);
  int i;
  for(i=0;i<n+1;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  cin>>b[i];

  ll ans=0;
  for(i=0;i<n;i++){
    // cout<<"i "<<i<<endl;
    if(a[i]-b[i]<0){
      ans+=a[i];
      int c=b[i]-a[i];
      if(a[i+1]-c<0){
        // cout<<"syo"<<endl;
        ans+=a[i+1];
        a[i+1]=0;
        // cout<<ans<<endl;
      }else{
        a[i+1]-=c;
        ans+=c;
      }
    }else{
      ans+=b[i];
    }
  }
  cout<<ans<<endl;

}
