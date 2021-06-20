#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;

  cin>>N;

  int i;

  vector<int> a(N);

  for(i=0;i<N;i++)
  cin>>a.at(i);

  sort(a.begin(),a.end());

  int sum=0;
  int sum2=0;
  int minf=200;
  if(N==1)
  minf=a.at(0);
  else if(N==2)
  minf=a.at(1);
  else if(N==3){
    sum=a.at(0)+a.at(1);
    sum=max(a.at(2),sum);
    sum2=a.at(0)+a.at(2);
    sum2=max(a.at(1),sum2);
    minf=min(sum,sum2);
  }
  else{
    // 一個
    sum=a.at(0)+a.at(1)+a.at(2);
    int min1=max(a.at(3),sum);
    // 二個
    sum=a.at(0)+a.at(2);
    sum2=a.at(1)+a.at(3);
    int min2=max(sum,sum2);
    sum=a.at(0)+a.at(3);
    sum2=a.at(1)+a.at(2);
    int min2_2=max(sum,sum2);

    int minfact=min(min1,min2);
    minf=min(minfact,min2_2);

  }

  cout<<minf<<endl;

}
