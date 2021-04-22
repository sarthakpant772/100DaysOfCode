// // #include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;





int solve(){
	string s;
	cin>>s;
	int t=0;
	int n=s.size(),o=0,z=0;
	for(int i=0;i<n;++i){
		if(s[i]=='1')
		  o++;
		else
		  z++;  
	}

	if(min(o,z)%2==1)
	  cout<<"DA\n";
	else
	  cout<<"NET\n";
	return 0; 
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}