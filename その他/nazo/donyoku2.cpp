#include<bits/stdc++.h>
using namespace std;

int main(){

  int T;
  cin>>T;

  vector<int> ans(T,0);
  for(int i=0;i<T;i++){
    string s;
    cin>>s;

    int cnt=0;
    string tokyo="tokyo";
    string kyoto="kyoto";
    for(int k=0;k<s.size();k++){
      if(s.at(k)=='t'){
        // cout<<"k "<<k<<" judge tokyo"<<endl;
        bool judge=0;
        for(int l=k;l<k+5;l++){
          if(l>=s.size()){
            judge=0;
            break;
          }
          if(s.at(l)==tokyo.at(l-k)){
            judge=1;
          }
          else{
            judge=0;
            break;
          }
          // cout<<"judge "<<judge<<endl;
        }
        if(judge){
          cnt++;
          k+=4;
        }
      }
      else if(s.at(k)=='k'){
        // cout<<"k "<<k<<" judge kyoto"<<endl;
        bool judge=0;
        for(int l=k;l<k+5;l++){
          if(l>=s.size()){
            judge=0;
            break;
          }
          if(s.at(l)==kyoto.at(l-k)){
            judge=1;
          }
          else{
            judge=0;
            break;
          }
        }
        // cout<<"judge "<<judge<<endl;
        if(judge){
          cnt++;
          k+=4;
        }
      }

    }
    ans.at(i)=cnt;


  }

  for(int i=0;i<T;i++)
  cout<<ans.at(i)<<endl;

}
