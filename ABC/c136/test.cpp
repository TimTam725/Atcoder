#include<bits/stdc++.h>
using namespace std;

int shiguma(int a,int b){
  int c=b-a+1;
  return c;
}
int main(){
  int N;
  cin>>N;

  int a=1;
  int b=9;
  int ans=0;
  bool check=1;
  while(check){
    if(a<=N){
      if(b<N){
        ans+=shiguma(a,b);
      }else{
        ans+=shiguma(a,N);
        check=0;
      }
    }else{
      check=0;
    }
    a*=100;
    b=b*100+99;
  }
  cout<<ans<<endl;


}
