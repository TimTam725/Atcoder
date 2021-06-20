#include<bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin>>a;
  if(a==1){
    int price,n;
    cin>>price>>n;
    cout<<n*price<<endl;
  }
  if(a==2){
    int price,n;
    string text;
    cin>>text>>price>>n;
    cout<<text<<"!"<<endl<<n*price<<endl;
  }
}
