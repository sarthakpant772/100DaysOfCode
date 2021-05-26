#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
	string s ;
	cin>>s;
	int sum=0;
	int count=0;
	for( int i=0 ;i<n;++i){
		if(s[i]==')')
		   sum--;
		else 
		   sum++;

		if(sum<0){
			count++;
			sum=0;
		}   
	}
	cout<<count<<"\n";
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