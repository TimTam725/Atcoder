#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;

  cin>>N;

  vector<int> v(N);
  vector<int> c(N);
  vector<int> a(N);

  int i;

  for(i=0;i<N;i++)
  cin>>v.at(i);

  for(i=0;i<N;i++)
  cin>>c.at(i);
  
  for(i=0;i<N;i++)
  a.at(i)=v.at(i)-c.at(i);

  int max=0;

  for(i=0;i<N;i++){
    if(a.at(i)>0)
    max+=a.at(i);
  }

  cout<<max<<endl;

}
