#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin>>s;

  int a,b;
  a=(s.at(0)-'0')*10+s.at(1)-'0';
  b=(s.at(2)-'0')*10+s.at(3)-'0';
// cout<<a<<" "<<b<<endl;
  if(a>12||a==0){
    //YYMM+NA
    if(b<=12&&0<b)
    cout<<"YYMM"<<endl;
    else if(b>12||b==0)
    cout<<"NA"<<endl;
  }
  else if(0<a){
    //YYMM+MMYY+AMB+NA
    if(b<=12&&0<b)
    cout<<"AMBIGUOUS"<<endl;
    else if(b>12||b==0)
    cout<<"MMYY"<<endl;

  }
  // else{
  //   if(b<=12&&0<b)
  //   cout<<"YYMM"<<endl;
  //   else
  //   cout<<"NA"<<endl;
  // }

}
