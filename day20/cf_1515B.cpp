#include <bits/stdc++.h>
#include<iostream>
#include<vector>

int n[15][15];
using namespace std;
bool isSquare(int a){
   int x=sqrt(a);
   return x*x==a; 
}
int solve(){
   int n;
   cin>>n;
//    int a,b;
//    a=n/4;
//    b=n/2;
//    int ar=sqrt(a);
//    int br=sqrt(b);
   if( n%2==0 && isSquare(n/2) ){
       cout<<"YES\n";
   }
   else if( n%4==0 && isSquare(n/4)){
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