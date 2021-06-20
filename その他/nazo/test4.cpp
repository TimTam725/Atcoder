#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,x,i,j,d,count;

  cin>>a>>b>>c>>x;

  count=0;
  if(x<=50*c)
  count++;
  if(x%100==0&&x<=100*b)
  count++;
  if(x%500==0&&x<=500*a)
  count++;

  for(i=1;i<=b;i++){
    d=x;
    d-=(100*i);
    if(d<=0)
    break;
    else if(d%50==0&&d<=50*c)
    count++;
  }
  for(i=1;i<=a;i++){
    d=x;
    d-=(500*i);
    if(d<=0)
    break;
    else if(d%50==0&&d<=50*c)
    count++;
  }
  if(x%500==0){
    for(i=1;i<=a;i++){
      d=x;
      d-=(500*i);
      if(d<=0)
      break;
      else if(d%100==0&&d<=100*b)
      count++;
    }
  }

  if(x>=650){
    for(i=1;i<=a;i++){
      d=x-500*i;
      if(d<=0)
      break;
      for(j=1;j<=b;j++){
        d=x-500*i;
        d-=100*j;
        if(d<=0)
        break;
        else if(d%50==0&&d<=50*c)
        count++;
      }
    }
  }


  cout<<count<<endl;
}
