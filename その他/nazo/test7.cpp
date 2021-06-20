#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,count;

  cin>>n;
  vector<int> a(n);
  for(i=0;i<n;i++)
  cin>>a.at(i);

  sort(a.begin(),a.end());
  count=1;

  for(i=0;i<n-1;i++){
    if(a.at(i)==a.at(i+1))
    continue;
    else
    count++;
  }

  cout<<count<<endl;


}
