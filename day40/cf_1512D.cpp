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
        ll n;
        cin>>n;
        vector<ll> a(n+2);
        ll sum=0;
        forn(i,n+2){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        forn(i,n){
            sum+=a[i];
        }
        if(sum==a[n]||sum==a[n+1]){
            for(int i=0;i<n;++i){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            return 0;
        }
        for(int i=0;i<n;++i){
            sum-=a[i];
            ll b=sum+a[n];
            if(b==a[n+1]){
                a[i]=a[n];
                for(int j=0;j<n;++j){
                cout<<a[j]<<" ";
                }
                cout<<endl;
                return 0;
            }
            else{
                 sum+=a[i];
            }
        }
        cout<<"-1"<<endl;
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