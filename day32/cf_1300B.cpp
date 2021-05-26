#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vi vector<int>
char a[1000][1010];
int solve(){
    int n;
       cin>>n;
       int m=2*n;
       int arr[m];
       for(int j=0;j<m;j++){
           cin>>arr[j];
       }
       
       sort(arr,arr+m);
// meadian of array is in middle
//for 2n length middle is n-1 and n
       cout<<abs(arr[n-1]-arr[n])<<endl;
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