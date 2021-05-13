#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int64_t ceil_div(int64_t a,int64_t b){
     return (a+b-1)/b;
}

int solve(){
    
	int64_t x,y,k;
	cin>>x>>y>>k;
	int64_t total=ceil_div(k*y-1+k,x-1);
	total+=k;
	cout<<total<<"\n";
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