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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        if(a%2!=0 && b%2!=0){
            cout<<"-1\n";
            return 0;
        }
        int c1=0,c0=0,cq=0;
        int n=s.size();
        forn(i,s.size()){
            int j = n-1-i;
            if(s[i]==s[j]){
                continue;
            }
            if(s[i]!=s[j] && s[i]=='?'){
                s[i]=s[j];
            }
            else if(s[i]!=s[j]&& s[j]=='?'){
                s[j]=s[i];
            }
          
        }
     //    cout<<s;
     c0=count(s.begin(),s.end(),'0');
     c1=count(s.begin(),s.end(),'1');
     cq=n-(c1+c0);
     if(c0>a){
          cout<<"-1\n";
         return 0;
     }
     else if(c1>b){
          cout<<"-1\n";
          return 0;
     }
     a-=c0;
     b-=c1;
     // cout<<c1<<c0<<cq;
    if( (a+b) != cq){
        cout<<"-1\n";
        return 0;
    }
 
    if( a%2!=0 && b%2!=0){
        cout<<"-1\n";
        return 0;
    }
 
    for(int i=0;i<n;++i){
        int j=n-1-i;
        if(s[i]=='?'){
            if(a>=2){
                s[i]='0';
                s[j]='0';
                a-=2;
            }
            else{
                if(b>=2){
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
            }
        }
    }  
    
    for(int i=0;i<n;++i){
        if(s[i]=='?'){
            if(a>0){
                s[i]='0';
            }
            else if(b>0){
                s[i]='1';
            }
        }
    }
    int i=0;
    int j=n-1;
   while(i<j){
        if(s[i]!=s[j]){
            cout<<"-1\n";
            return 0;
        }
        i++;
        j--;
   }
 
   cout<<s<<endl;
 
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