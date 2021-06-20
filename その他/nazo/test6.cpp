#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,k,min,suma,sumb;

  cin>>n;

  vector<int> vec(n);
  for(i=0;i<n;i++)
  cin>>vec.at(i);

  min=vec.at(0);
  for(i=0;i<n-1;i++){
    min=vec.at(i);
    k=i;
    for(j=i+1;j<=n-1;j++){
      if(vec.at(i)<vec.at(j)){
        vec.at(i)=vec.at(j);
        k=j;
      }
    }
    vec.at(k)=min;
  }

  suma=0;
  sumb=0;

  for(i=0;i<n;i+=2)
  suma+=vec.at(i);
  for(i=1;i<n;i+=2)
  sumb+=vec.at(i);

  cout<<suma-sumb<<endl;

}
