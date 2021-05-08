#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int n[15][15];
using namespace std;
int solve(){
   long long a,b;
//    long long x,y,z;
   cin>>a>>b;
   int mi=100000;
   int neg=0,sum=0;
   for(int i=0;i<a;++i){
       for(int j=0;j<b;++j){
           cin>>n[i][j];

           if(n[i][j]<0){
               neg++;
           }
           sum+=abs(n[i][j]);
           mi=min(mi,abs(n[i][j]));
       }
   }

   
  if(neg%2==0){
      cout<<sum<<"\n";
  }
  else{
      cout<<sum-(2*mi)<<"\n";
  }

   return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;
    cin>>n;
	while(n--){
		solve();
	}
return 0;

}