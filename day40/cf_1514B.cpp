    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
    #include<set>
    using namespace std;
    #define ll long long
    #define vi vector<int>
    #define all(x) x.begin(),x.end()
    #define endl '\n'
    #define forn(i,n) for(int i=0;i<int(n);++i)
    // char a[1000][1010];
    int solve(){
        int  n,k;
        cin>>n>>k;
        ll sum=1;
        const int  a=1e9+7;
        for(int i=0;i<k;++i){
            sum=(sum*n)%(a);
        }
        cout<<(ll)sum<<"\n";
    return 0;    
    }
     
    int main() {
    	ios_base::sync_with_stdio(0);
        cin.tie(0);
    	int n=1;
         cin>>n;
    	int i=1;
    	while(n--){
    		// cout<<"Case #"<<i<<": "; 
    		solve();
    		// i++;
    	}
    return 0;
     
    }