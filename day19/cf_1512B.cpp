#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int n[15][15];
using namespace std;
int solve(){
   int n;
   cin>>n;
   vector<int> a(n);
   int mi=10e9+7;
   int pos;
   for(int i=0;i<n;++i){
       cin>>a[i];
       if(a[i]<mi){
           mi=a[i];
           pos=i;
       }   
   }
   cout<<n-1<<"\n";
   for(int i=0;i<n;++i){
        if(pos==i)
         continue;
       cout<<pos+1<<" "<<i+1<<" "<<mi<<" "<<mi+abs(i-pos)<<"\n";
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