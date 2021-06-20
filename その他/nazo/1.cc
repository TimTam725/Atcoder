#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  string en;

  if(en!=+&&en!=-&&en!=*&&en!=/){
    cout<<"error"<<endl;
  }
  else{
    if(en=/){
      if(b==0){
        cout<<"error"<<endl;
      }
      else{
        c=a/b;
        cout<<c<<endl;
      }
    }
    else{
      cout<<a<<en<<b<<endl;
    }
  }
}
