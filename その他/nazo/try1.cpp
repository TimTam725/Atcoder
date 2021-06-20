#include<bits/stdc++.h>
using namespace std;

int main(){
  int A,B,a;

  cin>>A>>B;

  if(A>=B){
    a=A;
    A-=1;
  }
  else{
    a=B;
    B-=1;
  }
  a+=max(A,B);
  cout<<a<<endl;

}


for(i=0;i+K-1<k;i++){
  count=1;
  if(S.at(i)=='1'){
    if(i+1<N){
      for(j=i+1;j<N;j++){
        if(S.at(j)=='0'){
          i=j;
          break;
        }
        else if((j==N-1)&&(S.at(j)=='1')){
          count++;
          a=1;
        }
        count++;
      }
    }
    else{
      a=1;
    }
    if(a==1)
    break;
  }
}
}
}
else
maxleng=S.size();
