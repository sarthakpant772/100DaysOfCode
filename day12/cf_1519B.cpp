#include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
     
    	int x,y,k;
    	cin>>x>>y>>k;
    	if(x==1 && y==1 && k==0)
    	  {
    	       cout<<"YES\n";
    	       return 0;
    	  }
    	int total=0;
    	int temp=max(x,y),temp2=min(x,y);
    	if(x!=y){
    	x=temp;
    	y=temp2;
    	}
     
    	for(int i=1;i<x;++i){
    		if(i>=y){
    			total+=y;
    		}
    		else{
               total+=i;
    		}
    	}
     
    	for(int i=2;i<=y;++i){
    		total+=i;
    	}
         // cout<<total;
    	if(total==k){
    		cout<<"YES\n";
    	}
    	else{
    		cout<<"NO\n";
    	}
     
    	return 0;
    }
    int main() {
    	ios_base::sync_with_stdio(0);
        cin.tie(0);
    	int n;
    	cin >> n;
    	while(n--){
    		solve();
    	}
    return 0;
     
    }