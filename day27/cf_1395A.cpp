#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int r,g,b,w;
	cin>>r>>g>>b>>w;
	int flag=0;
	if(r%2!=0)
	  flag++;
	if(g%2!=0)
	  flag++;
	if(b%2!=0)
	   flag++;
	if(w%2!=0)
		flag++;
	if(flag<=1)
	    {
		cout<<"YES\n";
		return 0;
	}
	while(r!=0 && g!=0 && b!=0){
	    r--;g--;b--;w+=3;
	int flag=0;
	if(r%2!=0)
	  flag++;
	if(g%2!=0)
	  flag++;
	if(b%2!=0)
	   flag++;
	if(w%2!=0)
		flag++;
	if(flag<=1)
	    {
		cout<<"YES\n";
		return 0;
	}
	break;
	
}
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