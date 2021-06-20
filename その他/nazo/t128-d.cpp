#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;

  vector<int> v(n);
  int i;
  for(i=0;i<n;i++)
  cin>>v.at(i);

  int j,w;
  int ans=0;
  for(i=0;i<=k;i++){
    if(i>n)
    continue;
    for(j=0;j<=k-i;j++){
      if(i+j>n||(i==0)&&(j==0))
      continue;
      int ten=0;
      // cout<<"i "<<i<<" j "<<j<<endl;

      vector<int> a;
      for(w=0;w<i;w++){
        ten+=v.at(w);
        a.push_back(v.at(w));
      }
      for(w=0;w<j;w++){
        ten+=v.at(n-1-w);
        a.push_back(v.at(n-1-w));
      }
      int d=k-(i+j);
      sort(a.begin(),a.end());
      for(w=0;w<d;w++){
        if(w>=a.size())
        break;
        if(a.at(w)>0)
        break;
        ten-=a.at(w);
      }
      // cout<<"ten "<<ten<<endl;
      ans=max(ans,ten);
    }
  }

  cout<<ans<<endl;


}
