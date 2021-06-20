#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;

  vector<int> t(N);
  int i;
  for(i=0;i<N;i++){
    cin>>t.at(i);
  }

  int min=200;
  for(int bit=0;bit<(1<<N);bit++){
    int sumA=0;
    int sumB=0;

    for(i=0;i<N;i++){
      if(bit&(1<<i)){
        sumA+=t.at(i);
      }
      else
      sumB+=t.at(i);
    }

    int sum=max(sumA,sumB);

    if(min>sum)
    min=sum;

  }

  cout<<min<<endl;


}
