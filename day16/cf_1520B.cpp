    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
       long long n;
       long long a;
       cin>>n;
       a=n;
       int size;
       size =log10(a)+1;
    //    cout<<size<<" ";
       long long temp=0,ans=0;
       for(int i=0;i<size;++i){
           temp=temp*10+1;
     
           for(long long j=1;j<=9;++j){
               if(j*temp<=n){
                 ans++;
                //  cout<<(j*temp)<<" ";
               }
           }
       }
       cout<<ans<<"\n";
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