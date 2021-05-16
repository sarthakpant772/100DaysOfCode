#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
    string s;
	cin>>s;
	int last=0,start=0;
	int flag=1;
	for(int i=s.size()-1;i>=0;i--){
		if(flag==1){
			if(s[i]==')')
			   last++;
			else {
				flag=0;
				start++;
			}   
		}
		else
		 start++;
	}
	if(last>start)
	  cout<<"YES\n";
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