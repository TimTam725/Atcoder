#include<bits/stdc++.h>
using namespace std;

typedef tuple<int,int,int> tup;
int ze(int a){
  if(a>=0)
  return a;
  else
  return -a;
}

int main(){
  int d,n;
  cin>>d>>n;

  vector<int> t(d+1);
  int i,j;
  for(i=1;i<=d;i++)
  cin>>t.at(i);

  vector<tup> p(n+1);
  for(i=1;i<=n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    get<0>(p.at(i))=a;
    get<1>(p.at(i))=b;
    get<2>(p.at(i))=c;
  }

  int x,y,ma;
  ma=0;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      // cout<<"i "<<i<<" j "<<j<<endl;
      if(get<0>(p.at(i))<=t.at(1)&&get<1>(p.at(i))>=t.at(1)&&get<0>(p.at(j))<=t.at(2)&&get<1>(p.at(j))>=t.at(2)){
        int c=get<2>(p.at(i))-get<2>(p.at(j));
        c=ze(c);
        if(c>=ma){
          ma=c;
          x=i;
          y=j;
        }
      }
    }
  }
 // cout<<"x "<<x<<" y "<<y<<endl;
  int ans=ma;
  x=y;
  for(i=3;i<=d;i++){
    ma=0;
    for(j=1;j<=n;j++){
      int c=get<2>(p.at(x))-get<2>(p.at(j));
      c=ze(c);
      if(get<0>(p.at(j))<=t.at(i)&&get<1>(p.at(j))>=t.at(i)&&c>ma){
        // cout<<"syori"<<endl;
        y=j;
        ma=c;
      }
    }
    x=y;
    ans+=ma;
  }
  cout<<ans<<endl;

}
