#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int n[15][15];
using namespace std;
int solve(){
   long long a ,b;
   cin>>a>>b;
   if(b==1){
       cout<<"NO\n";
   }
   else{
     long long c,f;
     c=a*b;
     f=a*(b+1);
     cout<<a<<" "<<c<<" "<<f<<"\n";
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