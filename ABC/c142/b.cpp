#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef pair<int,int> pl;


int main(){
  int n,k;
  cin>>n>>k;

  int cnt=0;
  for(int i=0;i<n;i++){
    int h;
    cin>>h;
    if(h>=k)
    cnt++;
  }
  cout<<cnt<<endl;

}
