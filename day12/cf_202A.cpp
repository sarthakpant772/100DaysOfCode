#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
    string s;
	cin>>s; 
    string a;
    a[0]='a';
	int b=0;
	for(int i=0;i<s.size();++i){

		if(s[i]>a[0]){
           a[0]=s[i]; 
		}
	}
	for(int i=0;i<s.size();++i){
	     if(s[i]==a[0])
	       b++;
	}
	for(int i=0;i<b;++i){
		cout<<a[0];
	}
    cout<<"\n";
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;

	while(n--){
		solve();
	}
return 0;

}