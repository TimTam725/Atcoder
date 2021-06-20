#include<bits/stdc++.h>
using namespace std;

int rui(int,int);

int main(){

  int n,a,b,i,j,count,sum,sum2,sum3;
  cin>>n>>a>>b;
  vector<int> vec(5,0);
  count=0;

  for(j=0;j<n;j++){
    sum=n-j;
    sum3=n-j;
    for(i=4;i>=0;i--){
      vec.at(i)=sum/rui(10,i);
      sum-=vec.at(i)*rui(10,i);
    }
    sum2=0;
    for(i=0;i<=4;i++)
    sum2+=vec.at(i);
    if(sum2>=a&&sum2<=b)
    count+=sum3;
  }
  cout<<count<<endl;
}

int rui(int a,int b){

  int i,c;

  c=a;
  if(b==1)
  return a;
  else if(b==0)
  return 1;
  else{
    for(i=1;i<b;i++)
    a*=c;
    return a;
  }
}
