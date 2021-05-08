    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
       long long  n,k;
       long long  cf,s;
       cin>>n>>k;
       cf=(k+n-1)/k;
       s=cf*k;
       cout<<(s+n-1)/n<<"\n";
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