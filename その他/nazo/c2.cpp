#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b);
int left(int i,int c,vector<int> &a);
int right(int i,int c,vector<int> &a);

int main(){
  int N;

  cin>>N;

  vector<int> a(N);
  int i;

  for(i=0;i<N;i++)
  cin>>a.at(i);


  int l=0;
  int max,d;

  vector<int> r(N);
  vector<int> lef(N);

  lef.at(0)=0;
  lef.at(1)=a.at(0);
  for(i=2;i<N;i++){
    lef.at(i)=gcd(lef.at(i-1),a.at(i-1));
  }
  r.at(N-1)=0;
  r.at(N-2)=a.at(N-1);
  for(i=N-3;i>=0;i--){
    r.at(i)=gcd(r.at(i+1),a.at(i+1));
  }

  max=r.at(0);

  for(i=0;i<N;i++){
    d=gcd(r.at(i),lef.at(i));
    if(max<d)
    max=d;
  }


  cout<<max<<endl;
}

int gcd(int a,int b){
  if(a<b)
  swap(a,b);

  if(b==0)
  b=a;
  else{
    int c=a%b;

    while(c!=0){
      a=b;
      b=c;
      c=a%b;
    }
  }
  return b;

}

// int left(int i,int c,vector<int> &a){
//   int ll,d;
//
//   if(i==0)
//   return c;
//   else{
//     ll=gcd(c,a.at(i-1));
//     d=left(i-1,ll,a);
//   }
//
//   return d;
// }
//
// int right(int i,int c,vector<int> &a){
//   int ll,d,N;
//
//   N=a.size();
//
//   if(i==N-1)
//   return c;
//   else{
//     ll=gcd(c,a.at(i+1));
//     d=right(i+1,ll,a);
//   }
//
//   return d;
// }
