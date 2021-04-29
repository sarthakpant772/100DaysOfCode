    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
     
    	long long r,b,d;
        cin>>r>>b>>d;
    	long long t;
    	t=min(r,b);
    	if(r==b)
    	   t=r;
    // 	cout<<t;
        r-=t;
    	b-=t;
    	long long packets=t*d;
    	t=max(r,b);
    // 	cout<<t;
        
    	if(r==b)
    	   t=r;
    	if(t<=packets){
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