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
        string s;
        int n;
        cin>>n;
        cin>>s;
        int count=0;
        forn(i,n){
            if(s[i]=='0')
                count++;
        }
        if(count==1){
            cout<<"BOB\n";
        }
        else if (count%2==0){
            cout<<"BOB\n";
        }
        else if(count==0){
            cout<<"DRAW\n";
        }
        else{
            cout<<"ALICE\n";
        }

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