#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	long long a,b;
	cin>>a>>b;
	if(a==b){
	     cout<<"0\n";
	     return 0;
	}
	if(b>a)
	  swap(a,b);
	
	if(a%b!=0){
		cout<<"-1\n";
		return 0;
	}
	a/=b;
	int count=0;
	while(a%8==0){
		a/=8;
		count++;
	}
	while(a%4==0){
		a/=4;
		count++;
	}
	while(a%2==0){
		a/=2;
		count++;
	}
	if(count==0){
	     cout<<"-1\n";
	     return 0;
	}
	if(a==1)
	cout<<count<<"\n";
	else
	cout<<"-1\n";
	
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