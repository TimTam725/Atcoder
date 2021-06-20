#include<bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;

  int i,k,cnt;
  long long ans=0;
  long long right=0;
  long long left=0;
  int rcnt=0;
  int lcnt=0;
  vector<int> c;
  vector<long long> as;
  int order,a,b;
  cin>>order>>a>>b;
  c.push_back(a);
  left+=a;
  lcnt++;
  ans+=b;
  cnt=1;
  k=0;

  for(i=1;i<q;i++){
    cin>>order;
    if(order==1){
      cnt++;
      cin>>a>>b;
      if(cnt%2==0){
        if(c.at(k)<a){
          if(cnt!=2){
            k++;
            left+=c.at(k);
            right+=-c.at(k)+a;
            lcnt++;
          }
          if(cnt==2){
            right=a;
            rcnt++;
          }
          ans+=b;
        }
        else if(c.at(k)>a){
          if(cnt!=2){
            k++;
            left+=a;
            lcnt++;
          }
          if(cnt==2){
            left+=a-c.at(k);
            right+=c.at(k);
            rcnt++;
          }
          ans+=b;
        }
        else{
          ans+=b+a;
        }
      }
      else{
        //(c.at(k)-a)-(c.at(k-1)-c.at(k))
        if(c.at(k)<a){
          ans+=b-a;
        }
        else if(c.at(k)>a){
          ans+=b+a;
        }
        else{
          ans+=b+a;
        }
      }
      c.push_back(a);
      sort(c.begin(),c.end());
    }
    else{
      as.push_back(c.at(k));
      as.push_back(ans);
    }
  }

  for(i=0;i<as.size();i+=2){
    cout<<as.at(i)<<" "<<as.at(i+1)<<endl;
  }
}
