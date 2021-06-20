#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,Y,x,y,d;

  cin>>N>>Y;

  d=0;
  for(x=0;x<=N;x++){
    for(y=0;y<=N;y++){
      if((Y==10000*x+5000*y+1000*(N-x-y))&&N-x-y>=0){
        cout<<x<<" "<<y<<" "<<N-x-y<<endl;
        d=1;
        break;
      }
    }
    if(d==1)
    break;
  }

  if(d==0)
  cout<<"-1 -1 -1"<<endl;
}
