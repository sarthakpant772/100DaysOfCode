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
         //    if(s[0]=='0' && s[1]=='1'){
         //         s[0]='1';
         //    }
            
            forn(i,b){
                string c=s;
                for(int j=0;j<a;++j){  
                   
                    if(s[j]=='1'){
                        continue;
                    }
                    else{
                        if(s[j-1]=='1' && s[j+1]!='1'){
                            c[j]='1';
                            
                        }
                        else if(s[j-1]!='1' && s[j+1]=='1'){
                              c[j]='1';
                        }             
                       }
                }
                s=c;
            }
            cout<<s<<endl;
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