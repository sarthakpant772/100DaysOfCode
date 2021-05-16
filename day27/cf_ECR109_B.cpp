#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
 
int solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	int pre=-1;
	int count=0;
	int min=100000,max=-1;
	for(int i=0;i<n;++i){
		cin>>a[i];
		
		if (a[i]<min){
		     min=a[i];
		}
		if(a[i]>max){
		     max=a[i];
		}
		if(i>1){
			if(a[i-1]>a[i]){
				pre=1;
			}
		}
		
	}
	if(min==a[n-1] && max==a[0]){
	     cout<<"3\n";
	     return 0;
	}
	 if(max==a[0] || (min!=a[0] && max!=a[n-1])){
		  cout<<"2\n";
		  return 0;
 
	  }
	  if(min==a[n-1]){
		  cout<<"2\n";
		  return 0;
	  }
// 	cout<<count<<" ";
	  if(min!=a[0] && min!=a[n-1]){
		  cout<<"1\n";
		  return 0;
	  }  
 
	  if(max!=a[0] && max!=a[n-1]){
		  cout<<"1\n";
		  return 0;
	  }
 
	 
	  if(pre==1){
		  cout<<"1\n";
		  return 0;
	  }
	  else{
	       cout<<"0\n";
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