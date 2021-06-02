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
      int n,m;
      cin>>n>>m;
      vector<pair<int,pair<int,int>>> v;
      int arr[n][m];
      for(int i=0;i<n;++i){
        forn(j,m){
          cin>>arr[i][j];
        }
        sort(arr[i],arr[i]+m);
        forn(j,m){
          v.push_back(make_pair(arr[i][j],make_pair(i,j)));
        }
      }
      sort(v.begin(),v.end());
      for(int k=m-1;k>=0;--k){
        int i=v[k].second.first;
        int j=v[k].second.second;
        swap(arr[i][j],arr[i][k]);
      }
      for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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