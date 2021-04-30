#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<int> a(n),b(n);

  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  for(int i=0;i<n;++i){
    cin>>b[i];
  }
  int j=0,k=0;
  for(int i=0;i<n;++i){

    if(a[i]==1 && b[i]==0){
      j++;
    }
    if(a[i]==0 && b[i]==1){
      k++;
    }

  }
//   cout<<k;
  if(j==0 && k!=0){
       cout<<"-1";
       return 0;
  }
  if(j==0 && k==0){
    cout<<"-1\n";
    return 0;
  }
  int seat=(k)/j;
  seat++;
  cout<<seat;
  return 0;
}