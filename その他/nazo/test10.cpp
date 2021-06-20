#include<bits/stdc++.h>
using namespace std;

bool possi(int,int,int,int,int);
int zettaichi(int);

int main(){
  int N,i,a,b,t;
  bool can;
  cin>>N;

  vector<int> time(N);
  vector<int> xmoku(N);
  vector<int> ymoku(N);

  for(i=0;i<N;i++)
  cin>>time.at(i)>>xmoku.at(i)>>ymoku.at(i);

  // vector<vector<bool>> zahyo(100000,vector<bool>(100000,0));

  can=1;
  for(i=0;i<N;i++){
    if(i==0){
      if(i==0){
        a=0;
        b=0;
        t=time.at(i);
      }
      else{
        a=xmoku.at(i-1);
        b=ymoku.at(i-1);
        t=time.at(i)-time.at(i-1);
      }
      if(can==0)
      break;
      can*=possi(t,xmoku.at(i),ymoku.at(i),a,b);
    }
  }

  if(can==1)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;

}

bool possi(int t,int x,int y,int a,int b){

  bool can=0;
  int xsize,ysize;


  if(t==0){
    if(x==a&&y==b)
    can=1;
    else
    can=0;
  }
  else{
    xsize=zettaichi(x-a);
    ysize=zettaichi(y-b);

    if(xsize+ysize>t)
    can=0;
    else if(x==0){
      if(y==0){
        can=possi(t-1,x+1,y,a,b)+possi(t-1,x,y+1,a,b);
      }
      else if(y==100000){
        can=possi(t-1,x+1,y,a,b)+possi(t-1,x,y-1,a,b);
      }
      else{
        can=possi(t-1,x+1,y,a,b)+possi(t-1,x,y+1,a,b)+possi(t-1,x,y-1,a,b);
      }
    }
    else if(x==100000){
      if(y==0){
        can=possi(t-1,x-1,y,a,b)+possi(t-1,x,y+1,a,b);
      }
      else if(y==100000){
        can=possi(t-1,x-1,y,a,b)+possi(t-1,x,y-1,a,b);
      }
      else{
        can=possi(t-1,x-1,y,a,b)+possi(t-1,x,y+1,a,b)+possi(t-1,x,y-1,a,b);
      }
    }
    else if(y==0){
      can=possi(t-1,x-1,y,a,b)+possi(t-1,x,y+1,a,b)+possi(t-1,x+1,y,a,b);
    }
    else if(y==100000){
      can=possi(t-1,x-1,y,a,b)+possi(t-1,x+1,y,a,b)+possi(t-1,x,y-1,a,b);
    }
    else{
      can=possi(t-1,x-1,y,a,b)+possi(t-1,x+1,y,a,b)+possi(t-1,x,y-1,a,b)+possi(t-1,x,y+1,a,b);
    }
  }

  return can;
}

int zettaichi(int a){
  if(a<0)
  return -a;
  else
  return a;
}
