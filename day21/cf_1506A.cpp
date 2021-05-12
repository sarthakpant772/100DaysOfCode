#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int solve(){
   long long x,y,n;
   cin>>x>>y>>n;
   n--;
   long long row=n%x;
   long long col=n/x;
   cout<<(row*y)+col+1<<"\n"; 

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