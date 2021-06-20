#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  string S;

  cin>>N>>K;
  cin>>S;

  vector<int> a;

  int i,count,now;

  now=1;
  count=0;
  for(i=0;i<N;i++){
    if(S.at(i)==(char)('0'+now))
    count++;
    else{
      a.push_back(count);
      now=1-now;
      count=1;
    }
  }
  if(count!=0)
  a.push_back(count);

  int maxsum=0;
  int left=0;
  int right=left;
  int sum=a.at(0);


  for(left=0;left<a.size();left+=2){
    int res=0;

    // cout<<"aaa"<<endl;
    while(res<=2*K-1){
      right+=2;
      res=right-left;
      if(right<a.size()){
        sum+=a.at(right-1);
        sum+=a.at(right);
      }
    }
    if(right>=a.size()){
      sum=0;
      for(i=left;i<a.size();i++)
      sum+=a.at(i);
      if(maxsum<sum)
      maxsum=sum;
      break;
    }
    if(left!=0){
      sum-=a.at(left-2);
      sum-=a.at(left-1);
    }

    if(maxsum<sum)
    maxsum=sum;

    // cout<<maxsum<<endl;
  }

  cout<<maxsum<<endl;


}
