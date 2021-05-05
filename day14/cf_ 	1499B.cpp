    #include <bits/stdc++.h>
    #include<iostream>
    #include<vector>
     
    using namespace std;
    int solve(){
        string s;
    	cin>>s;
       int i,j;
       i=s.find("11");
       j=s.rfind("00");
     //   cout<<i<<j;
       if( i!=-1 && j!=-1 && i<j)
         cout<<"NO\n";
    	else
    	 cout<<"YES\n"; 
    //    cout<< cout << (i != -1 && j != -1 && i < j ? "NO" : "YES")<<endl;
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