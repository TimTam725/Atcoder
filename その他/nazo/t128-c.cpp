#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;

  vector<int> k(m);
  vector<int> p(m);
  vector<vector<int>> s(m,vector<int>(n));
  int i,j;
  for(i=0;i<m;i++){
    cin>>k.at(i);
    for(j=0;j<k.at(i);j++){
      cin>>s.at(i).at(j);
    }
  }
  for(i=0;i<m;i++)
  cin>>p.at(i);

  int cnt=0;
  for(int bit=0;bit<(1<<n);bit++){
    bool syori=0;
    // cout<<"bit "<<bit<<endl;
    for(i=0;i<m;i++){
      int c=0;
      // cout<<"k.at("<<i<<")"<<endl;
      for(j=0;j<k.at(i);j++){
        if(bit&(1<<s.at(i).at(j)-1))
        c++;
      }
      // cout<<"c "<<c<<endl;
      if(c%2!=p.at(i)){
        syori=0;
        break;
      }
      else{
        syori=1;
      }
    }
    if(syori){
      cnt++;
    }
  }
  cout<<cnt<<endl;

}
