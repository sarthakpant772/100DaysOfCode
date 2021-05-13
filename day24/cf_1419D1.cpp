#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int solve(){
    
	int n;
	cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	if (n==2){
	     cout<<"0\n";
	     cout<<a[0]<<" "<<a[1]<<"\n";
	     return 0;
	}
	sort(a.begin(),a.end());
	vector<long long> b(n);
	b[n-1]=a[n-1];
	b[0]=a[n-2];
	cout<<((n-1)/2)<<"\n";

	int i=0,j=n-3;
	int k=1;
	while(j>=i){
		b[k]=a[i];
		k++;
		b[k]=a[j];
		k++;
		i++;
		j--;
	}
	b[n-1]=a[n-1];
    for(int i=0;i<n;++i){
		cout<<b[i]<<" ";
	}
	
	cout<<"\n";
   return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;
//    cin>>n;
	while(n--){
		solve();
	}
return 0;

}