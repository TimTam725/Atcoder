#include<bits/stdc++.h>
using namespace std;

int ze(int);

int main(){
  long long sum;
  int N;
  int i;

  cin>>N;

  vector<int> a(N);

  for(i=0;i<N;i++)
  cin>>a.at(i);

  vector<int> fr;
  vector<int> ba;
  int count=0;
  int d;

  for(i=0;i<N;i++){
    if(a.at(i)<0){
      count++;
      if(count==1)
      d=i;
    }
    else{
      if(count%2==0)
      count=0;
      else{
        fr.push_back(d);
        ba.push_back(i-1);
        count=0;
      }
    }
  }

  if(count%2!=0){
    fr.push_back(d);
    ba.push_back(N-1);
  }

  sum=0;
  for(i=0;i<N;i++){
    sum+=ze(a.at(i));
  }
  int f;
  int b;
  for(i=0;i<fr.size();i++){
    f=fr.at(i);
    b=ba.at(i);
    if(f==0){
      if(b==fr.size()-1)
      sum-=min(a.at(f),a.at(b));
      else{
        
      }
    }
    else if(b==fr.size()-1){

    }
    else{

    }
  }

  // for(i=0;i<fr.size();i++)
  // cout<<fr.at(i)<<" "<<ba.at(i)<<endl;



}

int ze(int a){
  if(a<0)
  a*=(-1);
  return a;
}
