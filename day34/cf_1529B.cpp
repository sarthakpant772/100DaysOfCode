#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define endl '\n'
// char a[1000][1010];
int solve(){
   int n;
    cin>>n;
    int arr[n];
    // int ans=0;
    int count=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=0)count++;
      else mini=min(mini,arr[i]);
    }
    sort(arr,arr+n);
    int mindiff=INT_MAX-1;
    for(int i=0;i<n;i++){
      if(i+1<n and arr[i+1]<=0){
          mindiff=min(mindiff,arr[i+1]-arr[i]);
          // maxneg=max(maxneg,arr[i]);
          // maxneg=max(maxneg,arr[i+1]);
      }
    }
 
    int ans=count;
    if(mindiff>=mini)ans++;
    // cout<<an/
    cout<<ans;
    cout<<endl;
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