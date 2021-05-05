    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
       int n;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n-1;++i){
           if(s[i]!=s[i+1]){
               for(int j=i+1;j<n;++j){
                   if(s[i]==s[j]){
                       cout<<"NO\n";
                       return 0;
                   }
               }
           }
       }
       cout<<"YES\n";
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