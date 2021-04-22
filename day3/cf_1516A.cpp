#include<iostream>
#include<vector>
 
using namespace std;
 
 
 
 
 
int solve(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;++i)
       cin>>a[i];
 
	int j=0;
	int t=n-1;
	while(j<n-1 && k>0){
	     
	    if(k>0) 
		if(a[j]!=0){
			a[j]--;
			k--;
			a[t]++;
		}
		else
		  j++;
	}  
 
	for(int i=0;i<n;++i)
	   cout<<a[i]<<" ";
 
	cout<<"\n";   
	return 0; 
}
 
int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}