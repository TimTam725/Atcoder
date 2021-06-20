#include<bits/stdc++.h>
using namespace std;

int yuguri(int a,int b){
  if(a<b)
  swap(a,b);

  int c=a%b;
  if(c==0)
  return b;
  else{
    while(c!=0){
      a=b;
      b=c;
      c=a%b;
    }
    return b;
  }
}

int right(int i,int c,vector<int> &a,int N){
  int amari,d;

  if(i==N-1)
  return c;
  else{
    amari=yuguri(c,a.at(i+1));
    d=right(i+1,amari,a,N);
    return d;
  }
}


int left(int i,int c,vector<int> &a){
  int amari,d;

  if(i==0)
  d=c;
  else{
    amari=yuguri(c,a.at(i-1));
    d=left(i-1,amari,a);
  }
  return d;

}
// int yuguri(int,int);
// int left(int,int,int&);
// int right(int,int,int&);

int main(){

  int N;

  cin>>N;

  vector<int> a(N);
  int i;

  for(i=0;i<N;i++)
  cin>>a.at(i);

  vector<int> c(N);
  int amaril,amarir,left1,right1;

  for(i=0;i<N;i++){
    if(i==0){
      amarir=a.at(i+1);
      c.at(i)=right(i,amarir,a,N);;
    }
    else if(i==N-1){
      amaril=a.at(i-1);
      c.at(i)=left(i,amaril,a);
    }
    else{
      amarir=a.at(i+1);
      amaril=a.at(i-1);
      left1=left(i,amarir,a);
      right1=right(i,amaril,a,N);
      c.at(i)=yuguri(left1,right1);
    }
  }

  sort(c.begin(),c.end());

  cout<<c.at(N-1)<<endl;

}
