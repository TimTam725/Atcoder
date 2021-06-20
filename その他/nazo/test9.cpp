#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,j,d;
  string S;

  cin>>S;

  string d1="dream";
  string e1="erase";

  i=0;
  d=0;

  while(1){

    if(i+4>=S.size())
    d=1;

    else if(S.at(i)=='d'){
      for(j=i;j<i+5;j++){
        if(S.at(j)!=d1.at(j-i))
        d=1;
      }

      if((i+4==S.size()-1)&&d==0){
        cout<<"YES"<<endl;
        break;
      }

      if(d==0){
        if((i+5<=S.size()-1)&&(S.at(i+5)=='d'))
        i+=5;
        else if((i+5<=S.size()-1)&&(S.at(i+5)=='e')){
          if((i+6<=S.size()-1)&&S.at(i+6)=='r'){
            if(i+6==S.size()-1){
              cout<<"YES"<<endl;
              break;
            }
            else if(S.at(i+7)=='a'&&(i+7<=S.size()-1))
            i+=5;
            else
            i+=7;
          }
          else
          d=1;
        }
        else
        d=1;
      }
    }
    else if(S.at(i)=='e'){
      for(j=i;j<i+5;j++){
        if(S.at(j)!=e1.at(j-i))
        d=1;
      }

      if((i+4==S.size()-1)&&d==0){
        cout<<"YES"<<endl;
        break;
      }

      if(d==0){
        if((i+5<=S.size()-1)&&S.at(i+5)=='d')
        i+=5;
        else if((i+5<=S.size()-1)&&S.at(i+5)=='e')
        i+=5;
        else if((i+5<=S.size()-1)&&S.at(i+5)=='r'){
          if(i+5==S.size()-1){
            cout<<"YES"<<endl;
            break;
          }
          else
          i+=6;
        }
        else
        d=1;
      }
    }
    else
    d=1;

    if(d==1){
      cout<<"NO"<<endl;
      break;
    }

  }
}
