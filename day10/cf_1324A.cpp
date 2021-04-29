#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
	int n;
	cin>>n;
	
	vector<int> a(n);
	int min=100000;
    
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<min){
			min=a[i];
		}
	}
	if(n==1){
		cout<<"YES\n";
		return 0;
	}
    
	for(int i=0;i<n;++i){
		a[i]=a[i]-min;
     //    cout<<a[i]<<" ";
		if(a[i]%2!=0 && a[i]!=0){
			cout<<"NO\n";
			return 0;
		}
	}
	
	cout<<"YES\n";
	
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
return 0;

}