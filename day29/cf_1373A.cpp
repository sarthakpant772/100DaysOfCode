#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	long long a,b,c;
	cin>>a>>b>>c;
	if(a<c){
		cout<<"1 ";
	}
	else
		cout<<"-1 ";

	if (a*b>c)
	   cout<<b<<"\n";
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