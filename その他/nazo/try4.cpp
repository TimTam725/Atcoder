#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,K,i,j,k,m,maxleng,count,x,y,w,t;
  string S,s;
  bool a;

  cin>>N>>K>>S;

  vector<int> l(N);
  vector<int> r(N);
  k=0;
  a=0;
  for(i=0;i<N;i++){
    if(S.at(i)=='0'){
      if(i+1<N){
        for(j=i+1;j<N;j++){
          if(S.at(j)=='1'){
            l.at(k)=i;
            r.at(k)=j-1;
            i=j;
            break;
          }
          else if((j==N-1)&&(S.at(j)=='0')){
            l.at(k)=i;
            r.at(k)=N-1;
            a=1;
          }
        }
      }
      else{
        l.at(k)=i;
        r.at(k)=N-1;
        a=1;
      }
      if(a==1)
      break;
      k++;
    }
    if(i==N-1&&a==0&&k>0)
    k--;
  }

  maxleng=0;
  count=0;

  if(k+1>K){
    for(m=0;m+K-1<=k;m++){
      s=S;
      for(i=m;i<=m+K-1;i++){
        for(j=l.at(i);j<=r.at(i);j++){
          s.at(j)='1';
        }
      }
      for(t=0;t<N;t++){
        if(s.at(t)=='1'){
          count++;
          if(t==N-1){
            if(count>maxleng)
            maxleng=count;
            count=0;
          }
        }
        else{
          if(count>maxleng)
          maxleng=count;
          count=0;
        }
      }

    }
  }
  else
  maxleng=S.size();

  cout<<maxleng<<endl;



}
