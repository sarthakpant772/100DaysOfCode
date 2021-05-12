#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int solve(){
   int n;
   cin>>n;
   int a;
   vector<int> c(3,0);
//    c.assign(3,0);
//    int c0=0,c1=0,c2=0;
   for(int i=0;i<n;++i){
 		cin>>a;
		if(a%3==1)
		   c[1]++;
		   else if(a%3==0)
		          c[0]++;
				else
				   c[2]++;
   }
   int sum=0;
   while(*min_element(c.begin(),c.end())!=n/3){
	   for(int i=0;i<3;++i){
		   if(c[i]>n/3){
			   c[i]--;
			   sum++;
			   c[(i+1)%3]++;
		   }
	   }

   }
   cout<<sum<<"\n";
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