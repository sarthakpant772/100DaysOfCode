#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int solve(){
    
	int n;
	cin>>n;
	int i=1,j=n-1;
	vector<int> a(n);
	for(int p=0;p<n;++p){
		a[p]=p+1;
	}
	vector<int> b;
	cout<<"2\n";
	for(int i=n-1;i>0;--i){
		cout<<a[i-1]<<" "<<a[i]<<"\n";
		int sum=a[i]+a[i-1];
		sum=round((float)sum/2.0);
		a[i-1]=sum;
	}
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