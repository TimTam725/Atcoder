#include<bits/stdc++.h>
using namespace std;

void max3(int &a,int &b,int &c);

int main(){
  int n;
  cin>>n;

  int i;
  vector<int> a(n);
  for(i=0;i<n;i++)
  cin>>a.at(i);

  int j,k,aa,bb,cc;
  int maxa=0;
  for(i=0;i<n-2;i++){
      for(j=i+1;j<n-1;j++){
        for(k=j+1;k<n;k++){
          aa=a.at(i);
          bb=a.at(j);
          cc=a.at(k);
          max3(aa,bb,cc);
          // cout<<"aa "<<aa<<" bb "<<bb<<" cc "<<cc<<endl;
          if(aa<bb+cc){
            int d=aa+bb+cc;
            maxa=max(maxa,d);
          }
        }
      }
  }
  cout<<maxa<<endl;

}

void max3(int &a,int &b,int &c){
  int d;
  d=max(a,b);
  b=min(a,b);
  a=max(d,c);
  c=min(d,c);
}
