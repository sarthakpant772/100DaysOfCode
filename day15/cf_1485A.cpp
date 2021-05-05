#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
   long long a,b;
   cin>>a>>b;
   int pre=100000000;
   int count=0;
   
   for(int i=0;i * i<=a;++i){
      
      if(i==0 && b==1){
           continue;
      }
      count=i;
      
      int c=a;
      while(c){
           c/=(b+i);
           count++;
      }
     pre =min(pre,count);
      
   }
   cout<<pre<<"\n";
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