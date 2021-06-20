#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  string en;

  cin>>a>>en>>b;

  if(en!="+"&&en!="-"&&en!="*"&&en!="/"){
    cout<<"error"<<endl;
  }
  else{
    if(en=="/"){
      if(b==0)
      cout<<"error"<<endl;
      else{
        c=a/b;
        cout<<c<<endl;
      }
    }
    else{
      if(en=="+")
      cout<<a+b<<endl;
      if(en=="-")
      cout<<a-b<<endl;
      if(en=="*")
      cout<<a*b<<endl;
    }
  }
}
