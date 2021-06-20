#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;

  cin>>s;

  int i;
  vector<int> a(4);

  for(i=0;i<4;i++){
    a.at(i)=(s.at(i)-'0');
  }

  int bit;
  for(bit=0;bit<(1<<3);bit++){
    // cout<<"bit "<<bit<<endl;
    int sum=a.at(0);

    for(i=0;i<3;i++){
      if(bit&(1<<2-i)){
        sum+=a.at(i+1);
      }
      else{
        sum-=a.at(i+1);
      }
    }
// cout<<"syori a"<<endl;
    if(sum==7){
      for(i=0;i<3;i++){
        cout<<a.at(i);
        if(bit&(1<<2-i))
        cout<<'+';
        else
        cout<<'-';
      }
      cout<<a.at(3)<<"=7"<<endl;
      break;
    }
    // cout<<"syori b"<<endl;
  }

}
