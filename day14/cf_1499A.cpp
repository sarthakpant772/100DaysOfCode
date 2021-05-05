#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
   int n,k1,k2;
   int w,b;
   cin>>n>>k1>>k2;
   cin>>w>>b;
   int sumw=0,sumb=0;

   sumw=(k1+k2);
   sumb=(n-k1+n-k2);

   

   if(sumw>=w*2 && sumb>=b*2){
	   cout<<"YES\n";
   }
   else
    cout<<"NO\n";
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